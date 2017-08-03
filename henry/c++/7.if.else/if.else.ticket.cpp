#include <iostream>
using namespace std;

void ticket(int age) {
  if (age<12) {
    cout << "Free $0" << endl;
  }
  else if (age<=18) {
    cout << "$50" << endl;
  }
  else if (age<=65) {
    cout << "$100" << endl;
  }
  else {
    cout << "$65" << endl;
  }
}

int main() {
  int age;
  while(cin >> age) {
    ticket(age);
  }
}