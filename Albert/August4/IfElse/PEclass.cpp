#include <iostream>
using namespace std;

void plan(int day)
{
  if (day % 6 == 1 || day % 6 == 2 || day % 6 == 3)
  {
    cout << "running" << endl;
  }
  else
  {
    cout << "lifting" << endl;
  }
}

int main() {
  int day;
  while(cin >> day) {
    plan(day);
  }
}