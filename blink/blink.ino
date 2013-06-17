
//#include "Kalman_filter.h"
#include <Servo.h> 
#include <Ultrasonic.h>

#define TRIGGER_PIN  6
#define ECHO_PIN     7

//Servo myservo;
Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);
//Kalman kalman[3];

#define MAX_CHAN 8
#define MAX_SAMPLE 10

int AnInWOZ[MAX_CHAN] = {0, };
int AnIn[MAX_CHAN] = {0, };
int AnInBuf[MAX_CHAN] = {0, };

char buf[255] = {0, };



void setup()
{
  Serial.begin(57600);
  
  //myservo.attach(4);
  
  
  //Get all the analogue signals
  //Do a wind off zero
  
  for(int i = 0;i < MAX_CHAN;i++)
    AnInWOZ[i] = 0;
   
  for(int i = 0;i < MAX_SAMPLE;i++){
    
    AnIn[0] += analogRead(A0);
    AnIn[1] += analogRead(A1);
    AnIn[2] += analogRead(A2);
    AnIn[3] += analogRead(A3);
    AnIn[4] += analogRead(A4);
    AnIn[5] += analogRead(A5);
    AnIn[6] += analogRead(A6);
    AnIn[7] += analogRead(A7);
      
    delayMicroseconds(10);    
  }
  
  for(int i = 0;i < MAX_CHAN;i++)
    AnInWOZ[i] = (AnIn[i] / MAX_SAMPLE);
    
}

void loop()
 {
   
  float cmMsec, inMsec, pos;
  //long microsec = ultrasonic.timing();
  /*
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  
  Serial.print("MS: ");
  Serial.print(microsec);
  Serial.print(", CM: ");
  Serial.print(cmMsec);
  Serial.print(", IN: ");
  Serial.print(inMsec);
  */
  

  //*Get all the analogue signals
  for(int i = 0;i < MAX_CHAN;i++)
      AnInBuf[i] = 0;
      
  for(int i = 0;i < MAX_SAMPLE;i++){
      
    AnInBuf[0] += analogRead(A0);
    AnInBuf[1] += analogRead(A1);
    AnInBuf[2] += analogRead(A2);
    AnInBuf[3] += analogRead(A3);
    AnInBuf[4] += analogRead(A4);
    AnInBuf[5] += analogRead(A5);
    AnInBuf[6] += analogRead(A6);
    AnInBuf[7] += analogRead(A7);
    
    delayMicroseconds(10);
  }     
      
    for(int i = 0;i < MAX_CHAN;i++)
      AnIn[i] = (AnInBuf[i] / MAX_SAMPLE) - AnInWOZ[i];

    //cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  
    //Build a packet
    sprintf(buf, "~,%d,%d,%d,%d,%d,%d,%d,%d,%d,@", AnIn[0], AnIn[1], AnIn[2], AnIn[3], AnIn[4], AnIn[5], AnIn[6], AnIn[7], (int)cmMsec);
    //sprintf(buf, "~,%d,%d,%d,@", AnIn[4], AnIn[5], AnIn[6]);
    
    Serial.println(buf);
    
    
    
    //ranger
    pos = map((int)cmMsec, 2, 450, 1, 179);
    //myservo.write(pos);
    
    
    delay(20);
  }