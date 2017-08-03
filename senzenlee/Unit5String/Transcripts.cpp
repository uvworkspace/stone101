#include <iostream>
using namespace std;

void exam(int ch, int en) {
  cout << "Chinese: " << ch << endl;
  cout << "English: " << en << endl;
  cout << "Avg: " << (ch + en) / 2 << endl;
}

int main() {
  int ch, en;
  // read from input
  cin >> ch >> en;
  exam(ch, en);
}