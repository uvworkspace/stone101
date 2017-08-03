#include <iostream>
#include <sstream>
using namespace std;

// define const variables
const int day_hours=24;
const int hour_mins=60;
const int min_secs=60;
void prTime() {
  int secs = 86405;
  int d, h, m, s;
  s=secs%min_secs;
  secs-=s;
  secs/=min_secs;
  m=secs%hour_mins;
  secs-=m;
  secs/=hour_mins;
  h=secs%day_hours;
  secs-=h;
  secs/=day_hours;
  d=secs;
  cout << d << " d " << h << " h " << m << " m " << s << " s";
}

int main() {
  prTime();
  
}