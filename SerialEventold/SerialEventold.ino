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
 
 #include <Servo.h> 
 
Servo servo[6];  // create servo object to control a servo 
int val;    // variable to read the value from the analog pin 

String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete
int storage[20];
int counter = 0;
String str = "";
char *p;

void setup() {
  // initialize serial:
  Serial.begin(115200);
  // reserve 200 bytes for the inputString:
  inputString.reserve(200);
  
  servo[0].attach(3);  // attaches the servo on pin 9 to the servo object 
  servo[1].attach(5);  // attaches the servo on pin 9 to the servo object 
  servo[2].attach(6);  // attaches the servo on pin 9 to the servo object 
  servo[3].attach(9);  // attaches the servo on pin 9 to the servo object 
  servo[4].attach(10);  // attaches the servo on pin 9 to the servo object 
  servo[5].attach(11);  // attaches the servo on pin 9 to the servo object 
}

void loop() {
  // print the string when a newline arrives:
  if (stringComplete) {
    //Serial.println(inputString); 
    
    p = &inputString[0];
    
    Serial.println(p); 
    
    counter = 0; //initialise the counter
    while ((str = strtok_r(p, ",", &p)) != NULL) // delimiter is the comma
    {
       //Serial.println(str);
       storage[counter] = str.toInt(); //use the counter as an index to add each value to the array
       counter++; //increment the counter
       
       //Serial.println(storage[counter]); 
       
    }
    
    p = NULL; 
       
    //Throttle  
    val = storage[1];    
    val = map(val, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
    servo[0].write(val);                  // sets the servo position according to the scaled value 
             
    //Rotary POT
    val = storage[2];    
    val = map(val, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
    servo[0].write(val);                  // sets the servo position according to the scaled value 
        
    //Joy 1 X            
    val = storage[3];  
    val = map(val, -350, 350, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
    servo[1].write(val);                  // sets the servo position according to the scaled value 
    
    //Joy 1 Y
    val = storage[4];  
    val = map(val, -140, 170, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
    servo[2].write(val);                  // sets the servo position according to the scaled value 
    
    //Joy 2 X
    val = storage[5];  
    val = map(val, -500, 500, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
    servo[2].write(val);                  // sets the servo position according to the scaled value 
    
    //Joy 2 Y
    val = storage[6];  
    val = map(val, -500, 500, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
    servo[2].write(val);                  // sets the servo position according to the scaled value 
    
    
    // clear the string:
    inputString = "";
    stringComplete = false;

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
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if (inChar == 0x03) {
      stringComplete = true;
    } 
  }
}


