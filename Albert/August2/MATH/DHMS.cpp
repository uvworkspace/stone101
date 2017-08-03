#include <iostream>
using namespace std;

const int DAY_HOURS = 24;
const int HOUR_MINS = 60;
const int MIN_SECS = 60;

void prTime() {
  int secs = 90310;
  int d, h, m, s;
  s = secs % MIN_SECS;
  secs = (secs - s) / MIN_SECS;
  m = secs % HOUR_MINS;
  secs = (secs - m) / HOUR_MINS;
  h = secs % DAY_HOURS;
  secs = (secs - h) / DAY_HOURS;
  d = secs;
  cout << d << " d " << h << " h " << m << " m " << s << " s";
}

int main() {
  prTime();
  return 0;
}