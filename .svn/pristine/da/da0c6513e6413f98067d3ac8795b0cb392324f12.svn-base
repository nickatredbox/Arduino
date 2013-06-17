#include <SoftwareSerial.h>

#include <Servo.h>

Servo myservo;  // create servo object to control a servo 

int val;    // variable to read the value from the analog pin

/*
  Serial Event example
 
 When new serial data arrives, this sketch adds it to a String.
 When a newline is received, the loop prints the string and 
 clears it.
 
 A good test for this is to try it with a GPS receiver 
 that sends out NMEA 0183 sentences. 
 
 Created 9 May 2011
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/SerialEvent
 
 */

String inputString = "";         // a string to hold incoming data
int CommsState = 0;  // whether the string is complete

void setup() {
  // initialize serial:
  Serial.begin(115200);
  // reserve 200 bytes for the inputString:
  inputString.reserve(200);
  
  //myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  
}

void loop() {
  
  if (CommsState == 2) {
      
      Serial.println(inputString); 
      
      // clear the string:
      inputString= "";
      
      CommsState = 0;
      
      //val = map(val, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
      //myservo.write(val);                  // sets the servo position according to the scaled value  
      
      digitalWrite(13, LOW);    // set the LED off
    }
}

/*
  SerialEvent occurs whenever a new data comes in the
 hardware serial RX.  This routine is run between each
 time loop() runs, so using delay inside loop can delay
 response.  Multiple bytes of data may be available.
 */
void serialEvent() {
   
  
   
  while (Serial.available()) {
    
    // get the new byte:
    char inChar = (char)Serial.read(); 
    
    
     // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if (inChar == 0x2) {
      digitalWrite(13, HIGH);   // set the LED on
      CommsState = 1;
    }
    
    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if (inChar == 0x3) {
      CommsState = 2;
    }
      
      
    // add it to the inputString:
    if(CommsState == 1){
      inputString += inChar;
    }
      
   
  }
  
  
}


