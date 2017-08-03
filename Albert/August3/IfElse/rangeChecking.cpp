#include <iostream>
using namespace std;

bool check(int x, int a, int b)
{
  if (x - a >= 0 && x - b <= 0)
  {
    return true;
  }
  else if (x - a <= 0 && x - b >= 0)
  {
    return true;
  }
  else 
  {
    return false;
  }
}

int main() {
  int cnt;
  cin >> cnt;
  for (int i=0; i<cnt; i++) {
    int x, a, b;
    cin >> x >> a >> b;
    cout << check(x, a, b) << endl;
  }
}