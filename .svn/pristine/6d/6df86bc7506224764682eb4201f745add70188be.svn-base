#include <Wire.h>
#include <Servo.h>

//I2C addressses for IMU
#define GYR_ADDRESS (0xD2 >> 1)
#define MAG_ADDRESS (0x3C >> 1)
#define ACC_ADDRESS (0x30 >> 1)

//Gyro, ACC, Mag enable registers
#define L3G4200D_CTRL_REG1 0x20
#define LSM303_CTRL_REG1_A 0x20
#define LSM303_MR_REG_M 0x02

//acc settings
#define CTRL_REG4_A 0x23

//gyrto settings
#define CTRL_REG4 0x23

//Gyro, Acc, Mag output registers
#define L3G4200D_OUT_X_L 0x28
#define LSM303_OUT_X_L_A 0x28
#define LSM303_OUT_X_H_M 0x03

//ACC Reg data
int ACCx;
int ACCy;
int ACCz;
//Bias
int bACCx;
int bACCy;
int bACCz;

//Gyro Reg data
int GYROx;
int GYROy;
int GYROz;
//Bias
int bGYROx;
int bGYROy;
int bGYROz;

//MAG REG data
int MAGx;
int MAGy;
int MAGz;

//YAW calc
int xMAGMax;
int yMAGMax;
int zMAGMax;
int xMAGMin;
int yMAGMin;
int zMAGMin;
float xMAGMap;
float yMAGMap;
float zMAGMap;


//calculations
int pitchAccel;
int pitchGyro;
int rollAccel;
int rollGyro;
//float YawU;

//gyro/acc gain-converts raw values, gyro deg/s, acc to Gs
#define AccGain 3.9      //8g
#define GyroGain 70     //2000dps

//kalman,
float giroVar = 0.1;
float deltaGiroVar = 0.1;
float accelVar = 5;
float Pxx = 0.1; // angle variance
float Pvv = 0.1; // angle change rate variance
float Pxv = 0.1; // angle and angle change rate covariance
float kx, kv;

//final values
float pitchPrediction = 0; //Output of Kalman filter, final pitch value
float rollPrediction = 0;  //Output of Kalman filter, final roll value
float yawRaw=0; //final yaw value. yaw doesnt go through kalman! has its own calc.

//time, used in kalman filtering to keep a constant loop time
unsigned long timer = 0;
unsigned long timer1 = 0;
float timeStep = 0.02;          //20ms. Need a time step value for integration of gyro angle from angle/sec

void setup()
{
  Serial.begin(115200); //begin serial comm.

  Wire.begin(); //start Wire for IMU

  writeGyroReg(L3G4200D_CTRL_REG1, 0b10101111); //enable gyro, 0b10101111, 1010- 400hz ODR/50hz cutoff, 1111- default(enable all axis/normal mode)
  writeAccReg(LSM303_CTRL_REG1_A, 0b00110111); //enable acc, 0b00110111, 001- normal mode, 10- 400hz ODR, 111- default(enable all axis)
  writeMagReg(LSM303_MR_REG_M, 0x00); //enable mag

  //gyro settings
  writeGyroReg(CTRL_REG4, 0b00110001); //0-continous update, 0- little endian, 11 2000dps, 0- blank,  00- self test disabled, 0 spi 4 wire(if used)

  //acc settings
  writeAccReg(CTRL_REG4_A, 0b00110000); //0- continuous update, 0- little endian, 11- 8g scale, 00 default, 0- blank, 0- self test disabled

  CalibrateIMU(); //calibrate the IMU for level starting pos.
}

void loop() {
  timer = millis(); //loop begin time

  //read sensors
  readGyro();
  readAcc();
  readMag();

  //calcualte pitch, roll, yaw, kalman etc
  Calculations();

  Serial.write(rollAccel / 256);
  Serial.write(rollAccel & 256);

  timer1 = millis(); //loop end time
  delay(((timeStep * 1000)-(timer1-timer))); //delay so loop lasts 20msec, (timestep(.02) * 1000 = msec) - how long loop took

  
}

void readGyro() // get x, y, z values from gyro
{
  Wire.beginTransmission(GYR_ADDRESS);
  Wire.write(L3G4200D_OUT_X_L | (1 << 7));
  Wire.endTransmission();
  Wire.requestFrom(GYR_ADDRESS, 6);

  while (Wire.available() < 6);

  uint8_t xla = Wire.read();
  uint8_t xha = Wire.read();
  uint8_t yla = Wire.read();
  uint8_t yha = Wire.read();
  uint8_t zla = Wire.read();
  uint8_t zha = Wire.read();

  GYROy = xha << 8 | xla;
  GYROx = yha << 8 | yla;
  GYROz = zha << 8 | zla;
}

void readAcc() // get x, y, z values from accelerometer
{
  Wire.beginTransmission(ACC_ADDRESS);
  Wire.write(LSM303_OUT_X_L_A | (1 << 7));
  Wire.endTransmission();
  Wire.requestFrom(ACC_ADDRESS, 6);

  while (Wire.available() < 6);

  byte xla = Wire.read();
  byte xha = Wire.read();
  byte yla = Wire.read();
  byte yha = Wire.read();
  byte zla = Wire.read();
  byte zha = Wire.read();

  ACCy = -((xha << 8 | xla) >> 4); //reversed y axis
  ACCx = -((yha << 8 | yla) >> 4); //reversed x
  ACCz = (zha << 8 | zla) >> 4;
}

void readMag() //get mag x, y, z values
{
  Wire.beginTransmission(MAG_ADDRESS);
  Wire.write(LSM303_OUT_X_H_M);
  Wire.endTransmission();
  Wire.requestFrom(MAG_ADDRESS, 6);

  while (Wire.available() < 6);

  byte xhm = Wire.read();
  byte xlm = Wire.read();

  byte yhm, ylm, zhm, zlm;

  zhm = Wire.read();
  zlm = Wire.read();
  yhm = Wire.read();
  ylm = Wire.read();

  MAGx = (xhm << 8 | xlm);
  MAGy = (yhm << 8 | ylm);
  MAGz = (zhm << 8 | zlm);
}

void CalibrateIMU() //get level value bias of IMU sensors
{
  //temporary total holders
  int tGYROx;
  int tGYROy;
  int tGYROz;

  int tACCx;
  int tACCy;
  int tACCz;

  delay(100); //wait for stable values
  for(int i = 0; i<50; i++) //get values fifty times for acc + gyro
  {
    readGyro();
    readAcc();
    readMag();

    tGYROx += GYROx; //total gyrox value += current reading
    tGYROy += GYROy;
    tGYROz += GYROz;

    tACCx += ACCx;
    tACCy += ACCy;
    tACCz += ACCz;
    delay(8);
  }

  bGYROx = tGYROx / 50; //bias in gyro x = total gyro x/50
  bGYROy = tGYROy / 50;
  bGYROz = tGYROz / 50;

  bACCx = tACCx / 50;
  bACCy = tACCy / 50;
  bACCz = (tACCz / 50) - 256; //Don't compensate gravity away! We would all (float)!
}


void Calculations() //calculate roll/pitch for acc/gyro, remove level bias. kalman filtering for pitch/roll, calc yaw
{
  /*
  Gyro in deg/s
   pitchGyro = (GYROx - bGYROx) / GyroGain;
   rollGyro = (GYROy - bGYROy) / GyroGain;
   */

  pitchGyro = (pitchGyro + ((GYROx - bGYROx) / GyroGain)) * timeStep; //gyro pitch in deg
  pitchAccel = (atan2((ACCy - bACCy) / AccGain, (ACCz - bACCz) / AccGain) * 180.0) / PI;
  pitchPrediction = pitchPrediction + ((GYROx - bGYROx) / GyroGain) * timeStep;

  rollGyro = (rollGyro + ((GYROy - bGYROy) / GyroGain)) * timeStep; //gyro roll in deg
  rollAccel = (atan2((ACCx - bACCx) / AccGain, (ACCz - bACCz) / AccGain) * 180.0) / PI;
  rollPrediction = rollPrediction - ((GYROy - bGYROy) / GyroGain) * timeStep;

  YawCalc();  //calc yaw with mag!

  Kalman(); //predict pitch, roll
}

void YawCalc() // calculate yaw from mag
{
  //YAW!
  //this part is required to normalize the magnetic vector
  //get Min and Max Reading for MAGic Axis
  if (MAGx>xMAGMax) {
    xMAGMax = MAGx;
  }
  if (MAGy>yMAGMax) {
    yMAGMax = MAGy;
  }
  if (MAGz>zMAGMax) {
    zMAGMax = MAGz;
  }

  if (MAGx<xMAGMin) {
    xMAGMin = MAGx;
  }
  if (MAGy<yMAGMin) {
    yMAGMin = MAGy;
  }
  if (MAGz<zMAGMin) {
    zMAGMin = MAGz;
  }

  //Map the incoming Data from -1 to 1
  xMAGMap = float(map(MAGx, xMAGMin, xMAGMax, -30000, 30000))/30000.0;
  yMAGMap = float(map(MAGy, yMAGMin, yMAGMax, -30000, 30000))/30000.0;
  zMAGMap = float(map(MAGz, zMAGMin, zMAGMax, -30000, 30000))/30000.0;

  //normalize the magnetic vector
  float norm = sqrt( sq(xMAGMap) + sq(yMAGMap) + sq(zMAGMap));
  xMAGMap /=norm;
  yMAGMap /=norm;
  zMAGMap /=norm;

  //new calcs:
  float xh = xMAGMap * cos(pitchPrediction) + zMAGMap * sin(pitchPrediction);
  float yh = xMAGMap * sin(rollPrediction) * sin(pitchPrediction) + yMAGMap * cos(rollPrediction) - zMAGMap * sin(rollPrediction) * cos(pitchPrediction);
  float zh = -xMAGMap * cos(rollPrediction) * sin(pitchPrediction) + yMAGMap * sin(rollPrediction) + zMAGMap * cos(rollPrediction) * cos(pitchPrediction);

  yawRaw = 180 * atan2(yh, xh)/PI;
  if (yh >= 0)
  {
    //do nothing, yaw value is ok
  }
  else
  {
    yawRaw += 360;
  }
}

void Kalman() //kalman filter for pitch / roll
{
  Pxx += timeStep * (2 * Pxv + timeStep * Pvv);
  Pxv += timeStep * Pvv;
  Pxx += timeStep * giroVar;
  Pvv += timeStep * deltaGiroVar;
  kx = Pxx * (1 / (Pxx + accelVar));
  kv = Pxv * (1 / (Pxx + accelVar));

  pitchPrediction += (pitchAccel - pitchPrediction) * kx;
  rollPrediction += (rollAccel - rollPrediction) * kx;

  Pxx *= (1 - kx);
  Pxv *= (1 - kx);
  Pvv -= kv * Pxv;
}

//write stuff to the snsor registers
void writeGyroReg(byte reg, byte value)
{
  Wire.beginTransmission(GYR_ADDRESS);
  Wire.write(reg);
  Wire.write(value);
  Wire.endTransmission();
}

void writeAccReg(byte reg, byte value)
{
  Wire.beginTransmission(ACC_ADDRESS);
  Wire.write(reg);
  Wire.write(value);
  Wire.endTransmission();
}

void writeMagReg(byte reg, byte value)
{
  Wire.beginTransmission(MAG_ADDRESS);
  Wire.write(reg);
  Wire.write(value);
  Wire.endTransmission();
}
