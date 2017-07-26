#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  int nlines = 0;
  string line, word;
  while (getline(cin, line)) {
    ++nlines;
    std::istringstream iss(line);
    int nwords=0;
    while (iss >> word) {
      nwords++;
      cout << nlines <<","<< nwords << ": " << word << endl;
    }
  }
}