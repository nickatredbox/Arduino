


// Rewritten June 11 2013 after rebuild
// nickatredbox@gmail.com changed 29-05-2013 a few ty;pos and added all variables for chan7 builds not tested on hardware
// If you want we can add the ability to setup the device from a PC via USB



#define STARTSWITCH 5
#define OUT1 9
#define OUT2 10
#define OUT3 11
#define OUT4 12
#define OUT5 8
#define OUT6 7
#define OUT7 6
#define IN2 2
#define IN3 3
#define IN4 4



long t1,t2,t3,t4,t5,t6,t7;    // timers
long p1,p2,p3,p4,p5,p6,p7;    // Potentiometers D-5_no pot
long del1,del2,del3,del4,del5,del6,del7; // delays
long dur1,dur2,dur3,dur4,dur5,dur6,dur7; // durations
long rep1,rep2,rep3,rep4,rep5,rep6,rep7; // repetitions
long ivl1,ivl2,ivl3,ivl4,ivl5,ivl6,ivl7; // intervals

enum STATE 
{ 
  DONE,WAITING,RUNNING,SIGNAL,DELAY,DURATION,REPEAT,INTERVAL 
  
} state,state1,state2,state3,state4,state5,state6,state7;




////////////////////////////////////
// Set delays and durations       //
// choose fixed or variable times //
//
// switch  delay        dur     ivl       dur      ivl     dur
//      |   
//                  ___________      _____________      ___________
//_________________|           |____|             |____|           |______________ 
//
////////////////////////////////////
void setdelays()
{ 
  del1 = p1;
  dur1 = 50;
  rep1 = 1;
  ivl1 = 100;
  
  del2 = p2;
  dur2 = 1000;
  rep2 = 0;
  ivl2 = 0;
  
  del3 = p3;
  dur3 = 1000;
  rep3 = 0;
  ivl3 = 0;
  
  del4 = p4;
  dur4 = 1000;
  rep4 = 0;
  ivl4 = 0;
  
  del5 = p5;
  dur5 = 1000;
  rep5 = 0;
  ivl5 = 0;
  
  del6 = p6;
  dur6 = 400;
  rep6 = 0;
  ivl6 = 0;
  
  del7 = 4000;
  dur7 = 1000;
  rep7 = 0;
  ivl7 = 0;
  
 }



//////////////////////////
// Turn off all outputs //
//////////////////////////
void reset()
{ 
  for(int i = 6;i <= 14;i++)
  { 
    pinMode(i,OUTPUT);     
    digitalWrite(i,0);     
  }
  
}



///////////////////////////////////////
// while waiting for start switch,   //
// show all the potentiometer values //
///////////////////////////////////////
void report()
{ 
  Serial.write(  "p1="); Serial.print(p1);
  Serial.write("\tp2="); Serial.print(p2);
  Serial.write("\tp3="); Serial.print(p3);
  Serial.write("\tp4="); Serial.print(p4);
  Serial.write("\tp5="); Serial.print(p5);
  Serial.write("\tp6="); Serial.print(p6);
  Serial.write("\tp7="); Serial.print(p7);
  Serial.write("\r\n");
}



///////////////////////////
// read all the pots and //
// smooth out the noise  //
///////////////////////////
#define AVG 4
void readPots()
{ 
  static long v1,v2,v3,v4,x1,x2,x3,x4,x5,x6,x7;
  
  p1=(p1*(AVG-1)+analogRead(3))/AVG;
  p2=(p2*(AVG-1)+analogRead(2))/AVG;
  p3=(p3*(AVG-1)+analogRead(1))/AVG;
  p4=(p4*(AVG-1)+analogRead(0))/AVG;
  p5=(p5*(AVG-1)+analogRead(5))/AVG;
  p6=(p6*(AVG-1)+analogRead(4))/AVG;
  
  if((p1-x1)||(p2-x2)||(p3-x3)||(p4-x4)||(p6-x5)||(p6-x6))
  { 
      report();
    
      x1=p1; x2=p2; x3=p3; x4=p4; x5=p5; x6=p6;
  }
}



///////////////////////////
// Arduino-defined setup //
///////////////////////////
void setup()
{ 
  reset();
   
  Serial.begin(9600);
}



//////////////////////////
// Arduino-defined loop //
//////////////////////////
void loop()
{ 
  
  long m = millis();
  
  if(digitalRead(STARTSWITCH))
  { 
    
    switch(state)
    { 
      
      case WAITING: 
      
        setdelays(); 
        state=RUNNING; 
        
        break;
        
      
      case RUNNING: 
    
        switch(state1)
        { case SIGNAL:   { t1=m; state1=DELAY; } break;
          case DELAY:    if((m-t1)>=del1) { digitalWrite(OUT1,HIGH); t1=m; state1=DURATION; } break;
          case DURATION: if((m-t1)>=dur1) 
                         { digitalWrite(OUT1,LOW ); 
                           if(rep1) { rep1--; t1=m; state1=INTERVAL; } else state1=DONE; 
                         } break;
          case INTERVAL: if((m-t1)>=ivl1) { digitalWrite(OUT1,HIGH); t1=m; state1=DURATION; } break;
          case DONE:     break; 
        }
    
        switch(state2)
        { case SIGNAL:   { t2=m; state2=DELAY; } break;
          case DELAY:    if((m-t2)>=del2) { digitalWrite(OUT2,HIGH); t2=m; state2=DURATION; } break;
          case DURATION: if((m-t2)>=dur2) 
                         { digitalWrite(OUT2,LOW ); 
                           if(rep2) { rep2--; t2=m; state2=INTERVAL; } else state2=DONE; 
                         } break;
          case INTERVAL: if((m-t2)>=ivl2) { digitalWrite(OUT2,HIGH); t2=m; state2=DURATION; } break;
          case DONE:     break; 
        }
    
        switch(state3)
        { case SIGNAL:   { t3=m; state3=DELAY; } break;
          case DELAY:    if((m-t3)>=del3) { digitalWrite(OUT3,HIGH); t3=m; state3=DURATION; } break;
          case DURATION: if((m-t3)>=dur3) 
                         { digitalWrite(OUT3,LOW ); 
                           if(rep3) { rep3--; t3=m; state3=INTERVAL; } else state3=DONE; 
                         } break;
          case INTERVAL: if((m-t3)>=ivl3) { digitalWrite(OUT3,HIGH); t3=m; state3=DURATION; } break;
          case DONE:     break; 
        }
    
        switch(state4)
        { case SIGNAL:   { t4=m; state4=DELAY; } break;
          case DELAY:    if((m-t4)>=del4) { digitalWrite(OUT4,HIGH); t4=m; state4=DURATION; } break;
          case DURATION: if((m-t4)>=dur4) 
                         { digitalWrite(OUT4,LOW ); 
                           if(rep4) { rep4--; t4=m; state4=INTERVAL; } else state4=DONE; 
                         } break;
          case INTERVAL: if((m-t4)>=ivl4) { digitalWrite(OUT4,HIGH); t4=m; state4=DURATION; } break;
          case DONE:     break; 
        }
        
        switch(state5)
        { case SIGNAL:   { t5=m; state5=DELAY; } break;
          case DELAY:    if((m-t5)>=del5) { digitalWrite(OUT5,HIGH); t5=m; state5=DURATION; } break;
          case DURATION: if((m-t5)>=dur5) 
                         { digitalWrite(OUT5,LOW ); 
                           if(rep5) { rep5--; t5=m; state5=INTERVAL; } else state5=DONE; 
                         } break;
          case INTERVAL: if((m-t5)>=ivl5) { digitalWrite(OUT5,HIGH); t5=m; state5=DURATION; } break;
          case DONE:     break; 
        }
        
         switch(state6)
        { case SIGNAL:   { t6=m; state6=DELAY; } break;
          case DELAY:    if((m-t6)>=del6) { digitalWrite(OUT6,HIGH); t6=m; state6=DURATION; } break;
          case DURATION: if((m-t6)>=dur6) 
                         { digitalWrite(OUT6,LOW ); 
                           if(rep6) { rep6--; t6=m; state6=INTERVAL; } else state6=DONE; 
                         } break;
          case INTERVAL: if((m-t6)>=ivl6) { digitalWrite(OUT6,HIGH); t6=m; state6=DURATION; } break;
          case DONE:     break; 
        }
        
        switch(state7)
        { case SIGNAL:   { t7=m; state7=DELAY; } break;
          case DELAY:    if((m-t7)>=del7) { digitalWrite(OUT7,HIGH); t7=m; state7=DURATION; } break;
          case DURATION: if((m-t7)>=dur7) 
                         { digitalWrite(OUT7,LOW ); //nickatredbox@gmail.com changed 29-05-2013
                           if(rep7) { rep7--; t7=m; state7=INTERVAL; } else state7=DONE; 
                         } break;
          case INTERVAL: if((m-t7)>=ivl7) { digitalWrite(OUT7,HIGH); t7=m; state7=DURATION; } break;
          case DONE:     break; 
        }
        
        break;
        
    default: break;
    }
  } 
  else switch(state)
  { 
    case WAITING:
      
      readPots(); 
      
      break;
    
    default: 
      
      reset(); 
      
      delay(10);
      
      state = WAITING; 
      state1 = state2 = state3 = state4 = state5 = state6 = state7 = SIGNAL; 
        
      break;
  }
}
