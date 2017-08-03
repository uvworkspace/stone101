#include <iostream>
using namespace std;
int total = 0;
void feed10() {
  total += 10;
  cout << "There are " << total << " dollars in the machine now!";
  if (total >= 60) {
   cout << "pick one" << endl; 
  }
  else {
    cout << endl;
  }
}
void feed50() {
  total += 50;
  cout << "There are " << total << " dollars in the machine now!";
  if (total >= 60) {
   cout << "pick one" << endl; 
  }
  else {
    cout << endl;
  }
}
void twist() {
  if (total < 60 ) {
    cout << "Sorry, you still need " << 60 - total << " dollars to twist." << endl;
  }
  else {
    cout << "Here you are, and change " << total - 60 << ", bye bye!" << endl;
    total = 0;
  }
}
void cashback() {
  total = 0;
}

int main() {
  feed50(); //There are 50 dollars in the machine now!
  feed10(); //There are 60 dollars in the machine now!pick one
  feed50(); //There are 110 dollars in the machine now!pick one
  twist(); //Here you are, and change 50, bye bye!
  return 0;
}