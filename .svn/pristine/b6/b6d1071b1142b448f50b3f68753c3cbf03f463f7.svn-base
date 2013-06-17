
 
#include <Servo.h> 

#define MAX_CHAN 8

char buf[255] = {0, };
   

Servo servo[7];  // create servo object to control a servo 

#define MAX_SAMPLE 10

int val = 0;    // variable to read the value from the analog pin 
int TxVal[MAX_CHAN];
int AnIn[MAX_CHAN];
int AnInWOZ[MAX_CHAN];

int tick = 0; 
int pwm_count = 0; 

int ch1 = 7;
int ch2 =  8;
int ch3 =  12;


int ch1v = 0;
int ch2v = 0;
int ch3v = 0;
      

void setup() {
    
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
    
    for(int i = 0;i < MAX_CHAN;i++)
    {
        AnIn[0] = 0;
        AnInWOZ[i] = 0;
    }
   
    for(int i = 0;i < MAX_SAMPLE;i++){
      
      AnIn[0] += analogRead(A0);
      AnIn[1] += analogRead(A3);
      AnIn[2] += analogRead(A1);
      AnIn[3] += analogRead(A2);
      AnIn[4] += analogRead(A4);
      AnIn[5] += analogRead(A5);
      AnIn[6] += analogRead(A6);
      AnIn[7] += analogRead(A7);
      
      delayMicroseconds(10);    
    }

    for(int i = 0;i < MAX_CHAN;i++)
          AnInWOZ[i] = (AnIn[i] / MAX_SAMPLE);
        
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
          TxVal[i] = (AnIn[i] / MAX_SAMPLE) - AnInWOZ[i];
          
          
    
    if(pwm_count == 0)
    { 
      ch1v = pulseIn(ch2, HIGH);
      
      ch1v = map(ch1v, 1000, 2000, -1000, 1000);
    }
      
    if(pwm_count == 1)
    {  
      ch2v = pulseIn(ch1, HIGH);
      
      ch2v = map(ch2v, 1000, 2000,  -1000, 1000);
    }   
      
    if(pwm_count == 2)
    {        
      ch3v = pulseIn(ch3, HIGH);
      
      ch3v = map(ch3v, 1000, 2000,  0, 1000);
    }
    
    if((++pwm_count) == 3)
      pwm_count = 0;
    
    
    //X axis
    val = (TxVal[1] / 2) + ch3v + ch1v;
    
    val = map(val, 0, 1000, 1, 179);
    
    servo[0].write(val);
    
    
    //Y axis
    val = (TxVal[0] / 2) + ch3v + ch2v;
    
    val = map(val, 0, 1000, 1, 179);
    
    servo[1].write(val);
    
    
    
    
 
    if((tick % 20) == 0)
    { 
      sprintf(buf, "C,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,\n",  AnIn[0], AnIn[1], AnIn[2], AnIn[3], AnIn[4], AnIn[5], AnIn[6], AnIn[7], ch1v, ch2v, ch3v);
      
      Serial.write(buf);
       //delayMicroseconds(1000000000);   
      
      if(digitalRead(13) == false)
        digitalWrite(13, HIGH);   // set the LED on
      else
        digitalWrite(13, LOW);    // set the LED off              
     
    }
   
   ++tick;
}

