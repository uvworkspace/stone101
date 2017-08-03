#include <iostream>
using namespace std;

int DAY_HOURS = 24
int HOUR_MINS = 60
int MIN_SECS = 60
int x=DAY_HOURS*HOUR_MINS * MIN_SECS

void prTime() {
  int secs = 90310;
  int temp=secs;
  s=temp% MIN_SECS;
  temp /=MIN_SECS;
  m=temp%HOUR_MINS ;
  temp/=HOUR_MINS ;
  h=temp%DAY_HOURS;
  d=temp/DAY_HOURS;
  
  // calculate d, h, m and s

  cout << d << " d " << h << " h " << m << " m " << s << " s";
}