#include <iostream>
using namespace std;

int main() {
  string a("Learn Stone, have fun.");
  int pos = a.find("Stone");
  if (pos != string::npos) {
    cout << pos << endl;
  } else {
    cout << "not found" << endl;
  }
}