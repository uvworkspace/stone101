#include <iostream>
using namespace std;
double c2f(double c){
  double x=c*9/5+32;
  return x;
}

double f2c(double f){
  double y=f*5/9-32;
  return y;
}
int main() {
  double a, b;
  cin >> a >> b;
  cout << c2f(a) << endl;
  cout << f2c(b) << endl;
}