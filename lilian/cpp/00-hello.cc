#include <iostream>
#include <string>
using namespace std;

int one = 1;
string msg(string s, int t) {     //if int& t : pass reference
  return s + " " + to_string(t);
}
void prln(string& s) {      //add const to prevent from changing s
  cout << s << endl;
}
int main() {
  string day = "Day";
  int two = 2;
  string s = msg(day, one);
  cout << s << endl;
  string t=msg(day,two);
  prln(t);
}