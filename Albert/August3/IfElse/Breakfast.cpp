#include <iostream>
using namespace std;

void breakfast(int day)
{
  if (day % 5 == 1)
  {
    cout << "sandwich" << endl;
  }
  else if (day % 5 == 2)
  {
    cout << "rice ball" << endl;
  }
  else if (day % 5 == 3)
  {
    cout << "noodle" << endl;
  }
  else if (day % 5 == 4)
  {
    cout << "pan cake" << endl;
  }
  else
  {
    cout << "waffle" << endl;
  }
}

int main() {
  int day;
  while(cin >> day) {
    breakfast(day);
  }
}