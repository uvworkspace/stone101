#include <iostream>
using namespace std;














int main() {
  string a = "abc";
  cout << a.compare("ABC") << endl;
  string b = "stone";
  cout << b.compare("Stone") << endl;
  string c = "aBC";
  cout << c.compare("acc") << endl;
}


