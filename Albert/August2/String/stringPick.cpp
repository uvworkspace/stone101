#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a;
  cin >> a;
  if (a.length() > 10)
  {
    cout << a.substr(5, a.length() - 1) << endl;
  }
  else
  {
    cout << "LENGTH > 10 !!!!!" << endl;
  }
}