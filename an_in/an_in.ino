int analogPin = 3;     // potentiometer wiper (middle terminal) connected to analog pin 3
                       // outside leads to ground and +5V
int val = 0;           // variable to store the value read

void setup()
{
  Serial.begin(9600);          //  setup serial
}

void loop()
{
  digitalWrite(13, HIGH);   // set the LED on
   delay(100);
   
  for(int i = 0;i < 6;i++)
  {         
    val = analogRead(i);    // read the input pin
    Serial.println(val);             // debug value  
  }
  
   digitalWrite(13, LOW);    // set the LED off
   delay(100);
    
}

