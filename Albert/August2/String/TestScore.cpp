#include <iostream>
using namespace std;

void exam(int ch, int en) {
  double avg = (ch + en) / 2;
  cout << "Chinese: " << ch << endl << "English: " << en << endl << "Avg: " << avg;
}

int main() {
  int ch, en;
  // read from input
  cin >> ch >> en;
  exam(ch, en);
}