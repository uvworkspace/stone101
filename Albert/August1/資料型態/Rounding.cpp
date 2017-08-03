#include <iostream>
using namespace std;

int roundPositive(double x) 
{
  if (x - (int)x < 0.5)
  {
    return (int)x;
  }
  else
  {
    return (int)x + 1;
  }
}

int roundNegative(double x) 
{
  if (x - (int)x > -0.5)
  {
    return (int)x;
  }
  else
  {
    return (int)x - 1;
  }
}

int  main() {
  double x = roundPositive(3.14);
  cout << x << endl;
  x = roundPositive(3.5);
  cout << x << endl;
  x = roundNegative(-3.14);
  cout << x << endl;
  x = roundNegative(-3.5);
  cout << x << endl;
  return 0;
}