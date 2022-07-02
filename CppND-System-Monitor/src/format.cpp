#include <string>
#include "format.h"
using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long times) {
  float Times = times;
  float hours = Times/3600;
  float minutes = 0;
  int integerHours = hours;
  
  minutes = (hours-integerHours) * 60;
  int integerMinutes = minutes;
  float seconds = (minutes - integerMinutes) * 60;
  int integerSeconds = seconds;

  return (std::to_string(integerHours) + ":" + std::to_string(integerMinutes) + ":" + std::to_string(integerSeconds));
}

