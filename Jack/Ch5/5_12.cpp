// time_convert_with_constant.cpp
#include <iostream>
using namespace std;
int main(){
  const int SECONDS_PER_MINUTE = 60, MINUTE_PER_HOUR = 60, SECONDS_PER_HOUR = MINUTE_PER_HOUR * SECONDS_PER_MINUTE;
  int hours, minutes, seconds;
  // Prompt user to enter the total time to convert
  cout << "Enter the total time in seconds\n";
  // Read in
  cin >> seconds;
  // converting
  hours = seconds / SECONDS_PER_HOUR;
  seconds = seconds % SECONDS_PER_HOUR;
  minutes = seconds / SECONDS_PER_MINUTE;
  seconds = seconds % SECONDS_PER_MINUTE;
  // Show result
  cout << hours;
  if(hours == 1 || hours == 0)
    cout << " hour ";
  else
    cout << " hours ";
  cout << minutes;
  if(minutes == 1 || minutes == 0)
    cout << " minute ";
  else
    cout << " minutes ";
  cout << seconds;
  if(seconds == 1 || seconds == 0)
    cout << " second ";
  else
    cout << " seconds ";
}