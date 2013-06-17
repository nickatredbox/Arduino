#define MAX_CHAN 12
#define MAX_IN_STR 200
#define MAX_SETTINGS 20
#define MAX_NAV_VALS 50
 
#include <Servo.h> 

char buf[255] = {0, };
String str = "";
char *p;    

Servo servo[7];  // create servo object to control a servo 
int val = 0;    // variable to read the value from the analog pin 
int AnIn[9] = {0, };

String inputString = "";         // a string to hold incoming data



int Sample = 0;
int TxTemp[MAX_CHAN + 1] = {0, };
int TxVal[MAX_CHAN + 1] = {0, };

int NavVal[MAX_NAV_VALS] = {0, };
int SettingVal[MAX_SETTINGS] = {0, };


int rssiDur = 0;
int DigBits = 0;
int ComState = 0;
long PacketCount = 0;
long NoPacketCount = 0;

//Digital inputs
//TxVal[8] |= (digitalRead(5) << 0);//joy 2 push
//TxVal[8] |= (digitalRead(6) << 1);//pb
//TxVal[8] |= (digitalRead(7) << 2);//slide
//TxVal[8] |= (digitalRead(8) << 3);//toggle

void setup() {
  
  // initialize serial:
  Serial.begin(38400);
  
  // reserve 200 bytes for the inputString:
  inputString.reserve(MAX_IN_STR);
  
  servo[0].attach(3);  // attaches the servo on pin 3 to the servo object 
  servo[1].attach(5);  // attaches the servo on pin 5 to the servo object 
  servo[2].attach(6);  // attaches the servo on pin 6 to the servo object 
  servo[3].attach(9);  // attaches the servo on pin 9 to the servo object 
  servo[4].attach(10);  // attaches the servo on pin 10 to the servo object 
  servo[5].attach(11);  // attaches the servo on pin 11 to the servo object 
        
  pinMode(5,INPUT);//rssi
  digitalWrite(5, HIGH);
}

void loop(){
  
    //Get all the analogue signals
    AnIn[0] = analogRead(A0);
    AnIn[1] = analogRead(A1);
    AnIn[2] = analogRead(A2);
    AnIn[3] = analogRead(A3);
    AnIn[4] = analogRead(A4);
    AnIn[5] = analogRead(A5);
    AnIn[6] = analogRead(A6);
    AnIn[7] = analogRead(A7);
    
    
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
            
         }//Navigator                
         else if( ComState == 2)
         {            
            for(int i = 0 ;i < (NumChan-2);i++)
                 NavVal[i] = TxTemp[i];   
            
          }//Settings
          else if( ComState == 3)
          {                      
            for(int i = 0 ;i < (NumChan-2);i++)
               SettingVal[i] = TxTemp[i];                 
                        
          }//End of if( ComState == 0)
        
        ComState = 0;
        NoPacketCount = 0;
        
        break;
      } 
    }    
    
    //Count missing packets
    if((++NoPacketCount) > 50)
      SoftReset();
      
   //delayMicroseconds(1000);      
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
    
    //sprintf(buf, "T%02X,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,\n", PacketType, rssiDur, PacketCount, NoPacketCount, TxVal[1], TxVal[2], TxVal[3], TxVal[4], TxVal[5], TxVal[6],  AnIn[0], AnIn[1], AnIn[2], AnIn[3], AnIn[4], AnIn[5], AnIn[6], AnIn[7], DigBits);
    //sprintf(buf, "T%02X,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,\n", PacketType, rssiDur, PacketCount, NoPacketCount, AnIn[0], AnIn[1], AnIn[2], AnIn[3], AnIn[4], AnIn[5], AnIn[6], AnIn[7], DigBits);
    sprintf(buf, "T%02X%02X%04X%02X%03X%03X%03X%03X%03X%03X%03X%03X%02X\n", PacketType, rssiDur, PacketCount, NoPacketCount, AnIn[0], AnIn[1], AnIn[2], AnIn[3], AnIn[4], AnIn[5], AnIn[6], AnIn[7], DigBits);
    //sprintf(buf, "Tqwerty\n");
    
    Serial.write(buf);
    
    if(digitalRead(13) == false)
      digitalWrite(13, HIGH);   // set the LED on
    else
      digitalWrite(13, LOW);    // set the LED off              
  
  } 
}

void UpdateServos()
{
     
    //Throttle  
    val = TxVal[1] / 10;    
    //val = map(val, 0, 1790, 1, 179);     // scale it to use it with the servo (value between 0 and 180) 
    servo[0].write(val);                  // sets the servo position according to the scaled value 
       
    //Rotary POT
    val = TxVal[2] / 10;    
    //val = map(val, 0, 1790, 1, 179);     // scale it to use it with the servo (value between 0 and 180) 
    servo[1].write(val);                  // sets the servo position according to the scaled value 
    
    //Joy 1 X            
    val = TxVal[3] / 10;  
    //val = map(val, -900, 890, 1, 179);     // scale it to use it with the servo (value between 0 and 180) 
    servo[2].write(val);                  // sets the servo position according to the scaled value 
    
    //Joy 1 Y
    val = TxVal[4] / 10;  
    //val = map(val, -900, 890, 1, 179);     // scale it to use it with the servo (value between 0 and 180) 
    servo[3].write(val);                  // sets the servo position according to the scaled value 
    
    //Joy 2 X
    val = TxVal[5] / 10;  
    //val = map(val, -900, 890, 1, 179);     // scale it to use it with the servo (value between 0 and 180) 
    servo[4].write(val);                  // sets the servo position according to the scaled value 
    
    //Joy 2 Y
    val = TxVal[6] / 10;  
    //val = map(val, -900, 890, 1, 179);     // scale it to use it with the servo (value between 0 and 180) 
    servo[5].write(val);                  // sets the servo position according to the scaled value 
      
}

void SoftReset() // Restarts program from beginning but does not reset the peripherals and registers
{
  NoPacketCount = 0;
  asm volatile ("  jmp 0");  
}  


