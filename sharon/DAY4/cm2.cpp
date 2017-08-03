#include <iostream>
using namespace std;

const double PI = 3.14;

int power2(double x){
  int a=x*x;
  return a;
}

int circle(double x){
  int y=power2(x);
  int a=y*PI;
  return a;
}

int square (double x){
  int y=power2(x);
  return y;
}
int main() {
  double x;
  cin >> x;
  cout << power2(x) << endl;
  cout << circle(x) << endl;
  cout << square(x) << endl;
}