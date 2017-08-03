#include <iostream>
#include <string>
using namespace std;

string mystery(string s) {
  const string BLANK(" ");
  string str("");
  string temp;

  for (int i=0; i<s.length(); i++) {
    temp = s.substr(i, 1);
    if (!temp.compare(BLANK))
      str = 'a' + str;
  }
  return str;
}

int main() {
  cout << mystery("a b c d e f") << endl;
  return 0;
}

