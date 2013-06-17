
#include <Servo.h> 
#include <Ultrasonic.h>

#define TRIGGER_PIN  12
#define ECHO_PIN     13

Servo myservo;

Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

void setup()
{
  Serial.begin(9600);
  myservo.attach(4);
}

void loop()
 {
  float cmMsec, inMsec, pos;
  long microsec = ultrasonic.timing();
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

  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  
  Serial.print("~,");
  Serial.print(cmMsec);
  
  pos = (int)cmMsec;
  
  Serial.print(",");
  Serial.print(pos);
  
  pos = map(pos, 2, 450, 1, 179);
  
  Serial.print(",");
  Serial.print(pos);
  Serial.println("@");
    
  myservo.write(pos);
  
  delay(10);
  }
