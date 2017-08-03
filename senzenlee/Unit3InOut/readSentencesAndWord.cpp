#include <iostream>
#include <sstream>
using namespace std;

int main() {
  string line, word;
  while (getline(cin, line)) {
    std::istringstream iss(line);
    int nlines = 0;
    while (iss >> word) {
      nlines += 1;
      cout << nlines << ": " << word << endl;
    }
  }
}