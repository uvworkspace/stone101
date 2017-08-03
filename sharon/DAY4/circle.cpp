#include <iostream>
using namespace std;

const double PI = 3.14;

double circle (double r){
  double a=r*r*PI;
  return a;
}

double outer (double r1, double r2){
  double b= circle(r1);
  double c= circle(r2);
  return b-c;
}

int main() {
  double a, b, c;
  cin >> a >> b >> c;
  cout << circle(a) << endl;
  cout << outer(b, c) << endl;
}