#include <iostream>
using namespace std;

int main (){
  string a="abc";
  cout << a.compare("ABC") << endl;
  string s="stone";
  cout << s.compare("stone") << endl;
  string c="aBc";
  cout << c.compare("acc") << endl;
}