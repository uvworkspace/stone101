#include <iostream>
#include <sstream>
using namespace std;

int main() {
  int popo = 1;
  string line, word;
  while (getline(cin, line)) {
    std::istringstream iss(line);
    popo = 1;
    while (iss >> word) {
      cout << popo << ": " << word << endl;
      popo++;
    }
  }
}