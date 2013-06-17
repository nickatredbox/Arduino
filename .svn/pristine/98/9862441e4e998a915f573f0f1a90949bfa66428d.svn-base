/*
# Copyright (c) 2012 Nick Goodey
#
# Permission is hereby granted, free of charge, to any person obtaining 
# a copy of this software and associated documentation files 
# (the "Software"), to deal in the Software without restriction, 
# including without limitation the rights to use, copy, modify, 
# merge, publish, distribute, sublicense, and/or sell copies of the Software, 
# and to permit persons to whom the Software is furnished to do so, 
# subject to the following conditions:

# The above copyright notice and this permission notice shall be included 
# in all copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
# OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
# WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR 
# IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#define MAX_IN_STR 200
#define MAX_CHAN 12
#define MAX_SAMPLE 10

String inputString = "";         // a string to hold incoming data

int val = 0;    
int TxVal[MAX_CHAN];
int AnIn[MAX_CHAN];
int AnInWOZ[MAX_CHAN];

int Sample = 0;
char buf[255];
int tick = 0;
int ComState = 0;
int NoPacketCount = 0;
int rssi = 0;
unsigned long time = 0;

void setup() {
    
    // reserve 200 bytes for the inputString:
    inputString.reserve(MAX_IN_STR);
  
     pinMode(4,OUTPUT);//red led
     digitalWrite(4, HIGH);       // turn on pullup resistor
     pinMode(5,INPUT);//joy 2 push
     digitalWrite(5, HIGH);       // turn on pullup resistor
     pinMode(6,INPUT);//pb
     digitalWrite(6, HIGH);       // turn on pullup resistor
     pinMode(7,INPUT);//slide
     digitalWrite(7, HIGH);       // turn on pullup resistor
     pinMode(8,INPUT);//toggle
     digitalWrite(8, HIGH);       // turn on pullup resistor
     pinMode(9,OUTPUT);//green led
     digitalWrite(9, HIGH);       // turn on pullup resistor
     pinMode(10,INPUT);//rssi
     
     
    // initialize serial:
    Serial.begin(38400);
  
    
    //Do a wind off zero
    
    for(int i = 0;i < MAX_CHAN;i++)
        AnInWOZ[i] = 0;
   
    for(int i = 0;i < MAX_SAMPLE;i++){
      
      AnIn[0] += analogRead(A0);
      AnIn[1] += analogRead(A3);
      AnIn[2] += analogRead(A1);
      AnIn[3] += analogRead(A2);
      AnIn[4] += analogRead(A4);
      AnIn[5] += analogRead(A5);
      
      delayMicroseconds(10);    
    }

    for(int i = 0;i < MAX_CHAN;i++)
          AnInWOZ[i] = (AnIn[i] / MAX_SAMPLE);
   
}

void loop() {
  
    time = micros();
  
  //Throttle TxVal[1] 
  //Rotary pot TxVal[2]  
  //Joy 1 X TxVal[3] 
  //Joy 1 Y TxVal[4] 
  //Joy 2 X TxVal[5] 
  //Joy 2 Y TxVal[6] 

    for(int i = 0;i < MAX_CHAN;i++)
        AnIn[i] = 0;
        
    for(int i = 0;i < MAX_SAMPLE;i++){
        
      AnIn[0] += analogRead(A0);
      AnIn[1] += analogRead(A3);
      AnIn[2] += analogRead(A1) - AnInWOZ[2];
      AnIn[3] += analogRead(A2) - AnInWOZ[3];
      AnIn[4] += analogRead(A4) - AnInWOZ[4];
      AnIn[5] += analogRead(A5) - AnInWOZ[5];
      
      delayMicroseconds(200);
    }     
          
    for(int i = 0;i < MAX_CHAN;i++)
          TxVal[i] = (AnIn[i] / MAX_SAMPLE);
    
    
    /*
    splitted[0] = Analog.AnIn(Analog.AN_IN.Throttle).ToString();
    splitted[1] = Analog.AnIn(Analog.AN_IN.Pot).ToString();
    splitted[2] = (Analog.AnIn(Analog.AN_IN.Joy1_Y) - Analog.AnInWOZ(Analog.AN_IN.Joy1_Y)).ToString();
    splitted[3] = (Analog.AnIn(Analog.AN_IN.Joy1_X) - Analog.AnInWOZ(Analog.AN_IN.Joy1_X)).ToString();
    splitted[4] = (Analog.AnIn(Analog.AN_IN.Joy2_X) - Analog.AnInWOZ(Analog.AN_IN.Joy2_X)).ToString();
    splitted[5] = (Analog.AnIn(Analog.AN_IN.Joy2_Y) - Analog.AnInWOZ(Analog.AN_IN.Joy2_Y)).ToString();
    splitted[6] = "0";
    splitted[7] = "0";
    */
    
    //Calabrations
    TxVal[0] = map(TxVal[0], 0, 329, 0, 1790);            // scale it to use it with the servo (value between 0 and 180)
    TxVal[1] = map(TxVal[1], 0, 1023, 0, 1790);           // scale it to use it with the servo (value between 0 and 180)
    TxVal[2] = map(TxVal[2], -142, 171, 0, 1790);         // scale it to use it with the servo (value between 0 and 180)
    TxVal[3] = map(TxVal[3], -170, 193, 0, 1790);         // scale it to use it with the servo (value between 0 and 180)
    TxVal[4] = map(TxVal[4], -505, 515, 0, 1790);         // scale it to use it with the servo (value between 0 and 180)
    TxVal[5] = map(TxVal[5], 545, -477, 0, 1790);         // scale it to use it with the servo (value between 0 and 180)
    
    //RSSI
    rssi = pulseIn(10, LOW, 200);
    
    TxVal[7] = rssi;
    
    TxVal[8] = 0;    
    TxVal[8] |= (digitalRead(5) << 0);//joy 2 push
    TxVal[8] |= (digitalRead(6) << 1);//pb
    TxVal[8] |= (digitalRead(7) << 2);//slide
    TxVal[8] |= (digitalRead(8) << 3);//toggle
    
    TxVal[9] = (micros() - time);
        
    
    //calc checksum    
    int chk = 0;
    for(int i = 0;i < 11;i++)
      chk += TxVal[i];
    
    sprintf(buf, "C,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,\n", TxVal[0], TxVal[1], TxVal[2], TxVal[3], TxVal[4], TxVal[5], TxVal[6], TxVal[7], TxVal[8], TxVal[9], chk);
                    
    Serial.write(buf);
 
    //delayMicroseconds(200); 
    
    //DoTelemetery();    

    if(rssi == 0)
      digitalWrite(4,HIGH);
    if( (tick % (rssi / 10) ) == 0)
    {
       if(digitalRead(4) == HIGH)
          digitalWrite(4,LOW);
        else
          digitalWrite(4,HIGH);
    }
    
    
    
    unsigned long deltat = micros() - time;
    
    if(deltat < 0) deltat = 0;
    else if(deltat > 20000) deltat = 20000;
        
      //Serial.println(deltat);
  
    delayMicroseconds(20000 - deltat);   
  
    tick++;
}


void DoTelemetery()
{
  //Serial.println("void DoTelemetery()");
  //Capture the Xbee comms
      
  int CharCount = 0;
  
  //Serial.println(Serial.available());
  
  while ((Serial.available()) && ((++CharCount) < MAX_IN_STR) ) {    
        
    // get the new byte:               
    char inChar = (char)Serial.read(); 
    
    //Serial.print(inChar);
    
    if ( (inChar == 'T') && (ComState == 0) ) 
      ComState = 1;
    
    // add it to the inputString:
    if(ComState == 1)
      inputString += inChar;
      
    if(inputString.length() >= MAX_IN_STR)
      break;
           
    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if ((inChar == '\n') && ( ComState == 1)) {
      
      ComState = 0;
    
      Serial.println(inputString);          
                  
      NoPacketCount = 0;
      break;
    } 
  }    
}


