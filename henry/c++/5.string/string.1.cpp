#include <iostream>
using namespace std;

void exam(int ch, int en) {
 double avg = ( ch + en ) / 2;
 cout << "Chinese: " << ch << endl;
 cout << "English: " << en << endl;
 cout << "Average: " << avg << endl;
}

int main() {
  int ch, en;
  // read from input
  cin >> ch >> en;
  exam(ch, en);
}