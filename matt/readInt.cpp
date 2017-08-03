#include <iostream>
#include <sstream>
using namespace std;

int main() {
  string line, word;
  while (getline(cin, line)) {
    cout << "* ";
    int nWords = 1;
    istringstream iss(line);
    while (iss >> word) {
      cout << nWords++ << ". " << word << " ";
    }
    cout << endl;
  }
}