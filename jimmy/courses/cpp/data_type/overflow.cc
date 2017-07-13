#include <iostream>
#include <math.h>
#include <limits>
using namespace std;

void test() {
  int x;
  /* 1. assign 1024 * 1024 * 1024 * 2 to x, output x */
  // to be implemented
  x = 1024 * 1024 * 1024 * 2;
  cout << x << endl;
  /* 2. assign 1024 * 1024 * 1024 * 2 - 1 to x, output x */
  // to be implemented
  x = 1024 * 1024 * 1024 * 2 - 1;
  cout << x << endl;
  /* 3. assign 1024 * 1024 * 1024 * 2 * 2 to x, output x */
  // to be implemented
  x = 1024 * 1024 * 1024 * 2 * 2;
  cout << x << endl;
  
  int imin = numeric_limits<int>::min(); // minimum value
  int imax = numeric_limits<int>::max();
  cout << "max int: " << imax << " min int: " << imin << endl;
  
  /* you can use pow(base, exponent) */
  
  float a;  
  a = 1024;
  /* 4. assign a^111 to a, output a */
  // to be implemented
  a = pow(a, 111);
  cout << "a=" << a << endl;
  
  a = -1024;
  /* 5. assign a^111 to a, output a */
  // to be implemented
  a = pow(a, 111);
  cout << "a=" << a << endl;
  
  float fmin = numeric_limits<float>::min(); // minimum positive value
  float fmax = numeric_limits<float>::max();
  cout << "max float: " << fmax << " min float: " << fmin << endl;
  
  double m;  
  m = 1024;
  /* 6. assign m^111 to m, output m */
  // to be implemented
  m = pow(m, 111);
  cout << "m=" << m << endl;
  
  m = -1024;
  /* 7. assign m^111 to m, output m */
  // to be implemented
  m = pow(m, 111);
  cout << "m=" << m << endl;
  
  double dmin = numeric_limits<double>::min(); // minimum positive value
  double dmax = numeric_limits<double>::max();
  cout << "max double: " << dmax << " min double: " << dmin << endl;
}

int main() {
  test();
  return 0;
}