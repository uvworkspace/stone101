#include <iostream>
#include <sstream>
using namespace std;

int main() {
  string s;
  int nlines = 0;
  while (getline(cin, s)) {
    nlines += 1;
    cout << nlines << ": " << s << endl;
  }
}