#include <iostream>
using namespace std;
void plan(int date) {
  if (date > 30) {
    cout <<"Date error!!!" << endl;
  }
  else if (date % 6 == 1 || date % 6 == 2 || date % 6 == 3) {
    cout << "running" << endl;
  }
  else if (date % 6 == 4 || date % 6 == 5 || date % 6 == 0) {
    cout << "lifting" << endl;
  }
}

int main() {
  int day;
  while(cin >> day) {
    plan(day);
  }
}