#include <iostream>
using namespace std;

int main()
{
  string haha;
  while (getline(cin, haha))
  {
    cout << "You entered: " << haha << endl;
  }
  return 0;
}