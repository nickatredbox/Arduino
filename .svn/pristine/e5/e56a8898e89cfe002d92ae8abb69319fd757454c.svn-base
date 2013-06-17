
 
#include <Servo.h> 

#define MAX_CHAN 12
#define MAX_IN_STR 200

char buf[255] = {0, };
String str = "";
char *p;    
String inputString = "";         // a string to hold incoming data
int rssiDur = 0;
int DigBits = 0;
int ComState = 0;
long PacketCount = 0;
long NoPacketCount = 0;

int Sample = 0;
int TxTemp[MAX_CHAN + 1] = {0, };
int TxVal[MAX_CHAN + 1] = {0, };


Servo servo[7];  // create servo object to control a servo 

#define MAX_SAMPLE 10

int val = 0;    // variable to read the value from the analog pin 

int AnIn[MAX_CHAN];
int AnInWOZ[MAX_CHAN];

int tick = 0; 
int pwm_count = 0; 

int ch1 = 7;
int ch2 =  8;
int ch3 =  12;

int AeileronWOZ = 0;
int ElevatorWOZ = 0;
int ThrottleWOZ = 0;

int Aeileron = 0;
int Elevator = 0;
int Throttle = 0;
int MainFan = 0;
int Yaw = 0;

      

void setup() {
    
  inputString.reserve(MAX_IN_STR);
  
  pinMode(ch1, INPUT);
  pinMode(ch2, INPUT);
  pinMode(ch3, INPUT);
   
  // initialize serial:
  Serial.begin(38400);
  
  
  servo[0].attach(3);  // attaches the servo on pin 3 to the servo object 
  servo[1].attach(5);  // attaches the servo on pin 5 to the servo object 
  servo[2].attach(6);  // attaches the servo on pin 6 to the servo object 
  servo[3].attach(9);  // attaches the servo on pin 9 to the servo object 
  servo[4].attach(10);  // attaches the servo on pin 10 to the servo object 
  servo[5].attach(11);  // attaches the servo on pin 11 to the servo object 
  
   //Do a wind off zero
    AnalWOZ();
       
       
  servo[0].write(90);
  servo[1].write(90);
  servo[2].write(10);
  servo[3].write(90);
  servo[4].write(90);
  servo[5].write(90);
      
}


void loop(){
  
   for(int i = 0;i < MAX_CHAN;i++)
        AnIn[i] = 0;
        
    for(int i = 0;i < MAX_SAMPLE;i++){
        
      AnIn[0] += analogRead(A0);
      AnIn[1] += analogRead(A1);
      AnIn[2] += analogRead(A2);
      AnIn[3] += analogRead(A3);
      AnIn[4] += analogRead(A4);
      AnIn[5] += analogRead(A5);
      AnIn[6] += analogRead(A6);
      AnIn[7] += analogRead(A7);
      
      delayMicroseconds(200);
    }     
          
    for(int i = 0;i < MAX_CHAN;i++)
          AnIn[i] = (AnIn[i] / MAX_SAMPLE) - AnInWOZ[i];
          
          
          
          
    //Capture the Xbee comms        
    int CharCount = 0;
    
    while ((Serial.available()) && ((++CharCount) < MAX_IN_STR) ) {
      
      // get the new byte:               
      char inChar = (char)Serial.read(); 
      
      //Determine packet type
      if      ( (inChar == 'C') && (ComState == 0) ) 
        ComState = 1;
      else if ( (inChar == 'N') && (ComState == 0) ) 
        ComState = 2;
      else if ( (inChar == 'S') && (ComState == 0) ) 
        ComState = 3;
      
      // add it to the inputString:
      if(ComState > 0)
        inputString += inChar;
        
      if(inputString.length() >= MAX_IN_STR)
        break;
     
      //Detect end of packet
      if ( (inChar == '\n') && (ComState > 0) )
      {
         //Count packets
         PacketCount++;
         
         int NumChan = ExtractPacket();
         
         if(NumChan > 2) 
         
         //Tramsmitter     
         if( ComState == 1)
         {                      
            for(int i = 0 ;i < (NumChan-2);i++)
                 TxVal[i] = TxTemp[i];  
             
             DoTelemetery();   
             
             UpdateServos();            
            
         }//End of if( ComState == 0)
        
        ComState = 0;
        NoPacketCount = 0;
        
        break;
      } 
    }    
    
    //Count missing packets
    if((++NoPacketCount) > 50)
      SoftReset();
     
     
     
}

int ExtractPacket()
{
   
    int Lchk = 0;      
    int channel = 0; //initialise the channel count
    
    p = &inputString[0];
    
    while ((str = strtok_r(p, ",", &p)) != NULL) // delimiter is the comma
    {

       TxTemp[channel] = str.toInt(); //use the channel as an index to add each value to the array
       
       Lchk += TxTemp[channel];
       
       channel++; //increment the channel
       
       if(channel > MAX_CHAN)
         break;       
    }
    
    p = NULL; 
    inputString = "";
 
    //Process in comming data
    if(channel > 2)
    {        
      //Remove the remote chk from the total
      Lchk -= TxTemp[channel-2];
      
      //Checksum
      if((Lchk - TxTemp[channel-2]) == 0)
          return channel;              
              
    }
    
    return -1;
}

void DoTelemetery()
{
  
  
  //Send back a telemetery packet    
  if((PacketCount % 5) == 0)
  {  
    rssiDur = pulseIn(5, LOW, 200);
    
    int PacketType =  12;
    
    sprintf(buf, "T%02X%02X%04X%02X%03X%03X%03X%03X%03X%03X%03X%03X%02X\n", PacketType, rssiDur, PacketCount, NoPacketCount, AnIn[0], AnIn[1], AnIn[2], AnIn[3], AnIn[4], AnIn[5], AnIn[6], AnIn[7], DigBits);
    
    Serial.write(buf);
    
    if(digitalRead(13) == false)
      digitalWrite(13, HIGH);   // set the LED on
    else
      digitalWrite(13, LOW);    // set the LED off              
  
  } 
}


void UpdateServos()
{
    /*
    SendPacket += elevator.ToString() + ",";
    SendPacket += aeleron.ToString() + ",";
    SendPacket += throttle.ToString() + ",";
    SendPacket += liftfan.ToString() + ",";
    SendPacket += yaw.ToString() + ",";
    SendPacket += chk.ToString() + ",\n";
    */
            
     Elevator = TxVal[1];
     Aeileron = TxVal[2];
     Throttle = TxVal[3];
     MainFan = TxVal[4];
     Yaw = TxVal[5];
     
    //Fan
    val = MainFan;
    val = map(val, 0, 100, 1, 179);    
    servo[2].write(val);
    
    
    //Yaw
    val = Yaw;
    val = map(val, -100, 100, 1, 179);    
    servo[3].write(val);
    
    

    //X AXIS
    double XTrimGain = -0.5;
    int XTrim = (int)((double)AnIn[1] * XTrimGain);
    
    double XGain = 0.5;
    int XStick = (int)((double)Aeileron * XGain);
    
    
    //Y AXIS BOTH FRONT MOTORS
    double YTrimGain = 0.5;
    int YTrim = (int)((double)AnIn[0] * YTrimGain);
    
    double YGain = 0.5;
    int YStick = (int)((double)Elevator * YGain);
    
    
    
    
    
    //LEFT FAN
    val =  Throttle - (YStick + YTrim) - (XStick + XTrim);
    
    val = map(val, -100, 100, 1, 179);
    
    servo[0].write(val);
    
    //RIGHT FAN
    val =  Throttle - (YStick + YTrim) + (XStick - XTrim);
    
    val = map(val, -100, 100, 1, 179);
    
    servo[1].write(val);
    
    
    
    
    
    
    
    //REAR MOTOR ALSO YAW MOTOR TRIM ONLY
    //val =  Throttle - YStick - YTrim;
    //val =  Throttle - YStick - YTrim;
    val =  Throttle + YTrim;
    
    val = map(val, 0, 100, 1, 179);
    
    servo[4].write(val);
    
    
      
}

void AnalWOZ()
{
  
    for(int i = 0;i < MAX_CHAN;i++)
    {
        AnIn[0] = 0;
        AnInWOZ[i] = 0;
    }
   
    for(int i = 0;i < MAX_SAMPLE;i++){
      
      AnIn[0] += analogRead(A0);
      AnIn[1] += analogRead(A1);
      AnIn[2] += analogRead(A2);
      AnIn[3] += analogRead(A3);
      AnIn[4] += analogRead(A4);
      AnIn[5] += analogRead(A5);
      AnIn[6] += analogRead(A6);
      AnIn[7] += analogRead(A7);
      
      delayMicroseconds(200);    
    }

    for(int i = 0;i < MAX_CHAN;i++)
          AnInWOZ[i] = (AnIn[i] / MAX_SAMPLE);
}


void SoftReset() // Restarts program from beginning but does not reset the peripherals and registers
{
  
  servo[0].write(90);
  servo[1].write(90);
  servo[2].write(10);
  servo[3].write(90);
  servo[4].write(90);
  servo[5].write(90);
  NoPacketCount = 0;
  asm volatile ("  jmp 0");  
}  

