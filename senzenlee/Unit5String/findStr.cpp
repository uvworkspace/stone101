#include <iostream>
using namespace std;
int main() {
  string a;
  getline(cin,a);
  int pos = a.find("Stone");
  if (pos != string::npos) {
    cout << pos << endl;
  }
  else {
    cout << "not found" << endl;
  }
}