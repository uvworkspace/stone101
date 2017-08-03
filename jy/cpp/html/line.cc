#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

class Line
{ 
  string str;
public:
  Line(string s) : str(s) {}
  Line(int nch, char ch) {
    while (nch-- > 0) str += ch;
  }
  
  string text() { return str; }
  int len() { return str.size(); }
  void println() { cout << str << endl; }
  Line &append(Line ln) {
    str += ln.str;
    return *this;
  }
  Line &append(string s) {
    str += s;
    return *this;
  }
};

int main() {
  Line solid(10, '*');
  Line white = Line("*").append(Line(8, ' ')).append("*");
  solid.println();
  for (int i=0; i<5; i++) white.println();
  solid.println();
}