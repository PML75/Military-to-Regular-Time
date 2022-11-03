#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

std::string MilitaryToRegularTime(int military_time) 
{

  int current_hr =  military_time / 100; // extract first two digits
  int current_min = military_time % 100; // extract last two digits

  string final; 

  if (current_hr >= 12 && current_min < 10)
  {
    string rHour = to_string(current_hr % 12);
    string rMin = to_string(current_min);
    final = rHour + ":0" + rMin + " pm";
  }
  else if (current_hr < 12 && current_min < 10)
  {
    string rHour = to_string(current_hr);
    string rMin = to_string(current_min);
    final = rHour + ":0" + rMin + " am";
  }
  else if (current_hr < 12 && current_min > 10)
  {
    string rHour = to_string(current_hr);
    string rMin = to_string(current_min);
    final = rHour + ":" + rMin + " am";
  }
  else 
  {
    string rHour = to_string(current_hr % 12);
    string rMin = to_string(current_min);
    final = rHour + ":" + rMin + " pm";
  }

  return final;
}
