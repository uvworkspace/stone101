#include <iostream>
using namespace std;
void breakfast(int date) {
  if (date > 31) {
    cout <<"Date error!!!" << endl;
  }
  else if (date % 5 == 1) {
    cout << "sandwich" << endl;
  }
  else if (date % 5 == 2) {
    cout << "rice ball" << endl;
  }
  else if (date % 5 == 3) {
    cout << "noodle" << endl;
  }
  else if (date % 5 == 4) {
    cout << "pan cake" << endl;
  }
  else if (date % 5 == 0) {
    cout << "waffle" << endl;
  }
}

int main() {
  int day;
  while(cin >> day) {
    breakfast(day);
  }
}