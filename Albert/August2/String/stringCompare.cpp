#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a = "abc";
  cout << a.compare("ABC") << endl;
  string b = "stone";
  cout << b.compare("stone") << endl;
  string c = "aBC";
  cout << c.compare("acc") << endl;
}