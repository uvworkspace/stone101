#include <iostream>
using namespace std;

// define const variables

void prTime(int times) {
  const int DAY_HOURS = 24;
  const int HOUR_MINS = 60;
  const int MIN_SECS = 60;
  int d, h, m, s;
  s = times % MIN_SECS;
  m = times / MIN_SECS;
  h = m / HOUR_MINS;
  m = m % HOUR_MINS;
  d = h / DAY_HOURS;
  h = h % DAY_HOURS;
  // calculate d, h, m and s

  cout << d << " d " << h << " h " << m << " m " << s << " s";
}

int main() {
  int _times;
  cin >> _times;
  prTime(_times);
  return 0;
}