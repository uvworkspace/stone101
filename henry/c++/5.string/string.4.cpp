#include <iostream>
#include <string>
using namespace std;

int main() {
  string a;
  getline(cin, a);
  int pos = a.find("Stone");
  if (pos != string::npos) {
    cout << pos << endl;
  }
  else {
    cout << "string::npos" << endl;
  }
}