#include <iostream>
using namespace std;

int main() {
  std::cout << "Hello, ";
  std::cout << "n\n" ;  
  std::cout << (int) 'b' << std::endl;
  std::cout << "world" << std::endl;
}

#include <iostream>
#include <string>
using namespace std;

int one = 1;
string msg(string& s, int t) {
  //& inidcates that it returns the label of the variable(can be altered)
  s += "a";
  return s + " " + to_string(t);
}
void prln(string s) {
  cout << s << endl;
}
int main() {
  string day = "Day";
  int two = 2;
  string s = msg(day, one);
  cout << s << endl;
  prln(msg(day, two));
}