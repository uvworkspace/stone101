#include <iostream>
#include <map>
using namespace std;

int main ()
{
  map<char,int> cnts;

  cnts['a']=10;
  cnts['x']=30;
  cout << "a: " << cnts['a'] << endl;
  cout << "x: " << cnts['x'] << endl;
  cout << "b: " << cnts['b'] << endl;
  cnts['c']++;
  cout << "c: " << cnts['c'] << endl;
}