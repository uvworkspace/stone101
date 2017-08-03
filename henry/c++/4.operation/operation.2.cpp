#include <iostream>
using namespace std;
  const int DAY_HOURS = 24;
  const int HOUR_MINS = 60;
  const int MIN_SECS = 60;

void prTime() {
  int times = 90310;
  int d, h, m, s;
  s = times % MIN_SECS;
  m = times / MIN_SECS;
  h = m / HOUR_MINS;
  m = m % HOUR_MINS;
  d = h / DAY_HOURS;
  h = h % DAY_HOURS;
    cout << d << " d " << h << " h " << m << " m " << s << " s";
}

int main() {
  prTime();
  return 0;
}