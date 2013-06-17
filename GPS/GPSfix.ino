   /*
    As an example, a waypoint arrival alarm has the form:
    $GPAAM,A,A,0.10,N,WPTNME*32
     * 
    where:
    GP	Talker ID (GP for a GPS unit, GL for a GLONASS)
    AAM	Arrival alarm
    A	Arrival circle entered
    A	Perpendicular passed
    0.10	Circle radius
    N	Nautical miles
    WPTNME	Waypoint name
    *32	Checksum data
    */
    /* Token will point to the data between comma "'", returns the data in the order received 
     * 
    /*THE GPRMC order is: UTC, UTC status , Lat, N/S indicator, Lon, E/W indicator, speed, course, date, mode, checksum
    token = strtok_r(gps_buffer, search, &brkb); //Contains the header GPRMC, not used

    token = strtok_r(NULL, search, &brkb); //UTC Time, not used
    //time=	atol (token);
    token = strtok_r(NULL, search, &brkb); //Valid UTC data? maybe not used... 


    //Longitude in degrees, decimal minutes. (ej. 4750.1234 degrees decimal minutes = 47.835390 decimal degrees)
    //Where 47 are degrees and 50 the minutes and .1234 the decimals of the minutes.
    //To convert to decimal degrees, devide the minutes by 60 (including decimals), 
    //Example: "50.1234/60=.835390", then add the degrees, ex: "47+.835390 = 47.835390" decimal degrees
    token = strtok_r(NULL, search, &brkb); //Contains Latitude in degrees decimal minutes... 

    //taking only degrees, and minutes without decimals, 
    //strtol stop parsing till reach the decimal point "."	result example 4750, eliminates .1234
    temp = strtol (token, &pEnd, 10);

    //takes only the decimals of the minutes
    //result example 1234. 
    temp2 = strtol (pEnd + 1, NULL, 10);

    //joining degrees, minutes, and the decimals of minute, now without the point...
    //Before was 4750.1234, now the result example is 47501234...
    temp3 = (temp * 10000) + (temp2);


    //modulo to leave only the decimal minutes, eliminating only the degrees.. 
    //Before was 47501234, the result example is 501234.
    temp3 = temp3 % 1000000;


    //Dividing to obtain only the de degrees, before was 4750 
    //The result example is 47 (4750/100 = 47)
    temp /= 100;

    //Joining everything and converting to float variable... 
    //First i convert the decimal minutes to degrees decimals stored in "temp3", example: 501234/600000 =.835390
    //Then i add the degrees stored in "temp" and add the result from the first step, example 47+.835390 = 47.835390 
    //The result is stored in "lat" variable... 
    //lat = temp + ((float)temp3 / 600000);
    current_loc.lat	= (temp * t7) + ((temp3 *100) / 6);

    token = strtok_r(NULL, search, &brkb); //lat, north or south?
    //If the char is equal to S (south), multiply the result by -1.. 
    if(*token == 'S'){
    current_loc.lat *= -1;
    }

    //This the same procedure use in lat, but now for Lon....
    token = strtok_r(NULL, search, &brkb);
    temp = strtol (token,&pEnd, 10); 
    temp2 = strtol (pEnd + 1, NULL, 10); 
    temp3 = (temp * 10000) + (temp2);
    temp3 = temp3%1000000; 
    temp/= 100;
    //lon = temp+((float)temp3/600000);
    current_loc.lng		= (temp * t7) + ((temp3 * 100) / 6);

    token = strtok_r(NULL, search, &brkb); //lon, east or west?
    if(*token == 'W'){
    current_loc.lng *= -1;
    }

    token = strtok_r(NULL, search, &brkb); //Speed overground?
    ground_speed = atoi(token) * 100;

    token = strtok_r(NULL, search, &brkb); //Course?
    ground_course = atoi(token) * 100l;
						
    GPS_new_data = true;
     * */
     /*
     class Button {
private:
  byte down_at;
  byte down;
  
public:
  Button();
  byte downFor();
  void resetDown();
  bool isDown();
  void turnOn();
  void turnOff();
};

Button::Button()
{
  this->down_at = 0;
  this->down = 0;
}

// Find the number of beats the button has been down for. Function can compute max. 8 sec down before rolling over.
byte Button::downFor()
{
  byte time;
  if (this->down_at > sc_beat)
  {
   time = (sc_beat + 256) - this->down_at;
  }
  else
  {
    time = sc_beat - this->down_at;
  }
  return time;
}

bool Button::isDown()
{
  return (bool)this->down;
}

void Button::resetDown()
{
  this->down_at = sc_beat;
  this->down = 1;
}
  
void Button::turnOn()
{
  if (!this->down)
  {
    this->down_at = sc_beat;
    this->down = 1;
  }
  return;
}

void Button::turnOff()
{
  this->down = 0;
  return;
}
*/
//-----------------------------------------------------
//
// Class	: 
//
// Purpose	: 
//
//-----------------------------------------------------
class GPSfix
{
  
    private:
    double decimal_deg;
    String deg;
    String minutes;
    String heading;
    float StrToFloat(String str);
    
    public:
    void GetFix(String Digits, String Heading);
    
};

//-----------------------------------------------------
//
// Function	: 
//
// Purpose	: 
//
//-----------------------------------------------------
//$GPRMC,055626,V,4334.3306,S,17241.9391,E,000.3,155.4,03,,,N
void GPSfix::GetFix(String Digits, String Heading)
{
    int dl = Digits.length();
    
    if ((Heading == "W") || (Heading == "S"))
        deg = "-" + Digits.substring(0, dl - 7);
    else
        deg = "+" + Digits.substring(0, dl - 7);

    //Longitude in degrees, decimal minutes. (ej. 4750.1234 degrees decimal minutes = 47.835390 decimal degrees)
    //Where 47 are degrees and 50 the minutes and .1234 the decimals of the minutes.
    //To convert to decimal degrees, devide the minutes by 60 (including decimals), 
    //Example: "50.1234/60=.835390", then add the degrees, ex: "47+.835390 = 47.835390" decimal degrees
    minutes = Digits.substring(dl - 7, dl - (dl - 7));

    double d = (double)StrToFloat(minutes);

    if ((Heading == "W") || (Heading == "S"))
        d *= -1.0;

    decimal_deg = (double)StrToFloat(deg) + (d / 60.0);

    heading = Heading;
    
}

float GPSfix::StrToFloat(String str){
  char carray[str.length() + 1]; //determine size of the array
  str.toCharArray(carray, sizeof(carray)); //put str into an array
  return atof(carray);
}






