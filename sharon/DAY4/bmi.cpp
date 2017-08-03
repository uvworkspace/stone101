#include <iostream>
using namespace std;


double  computeBMI(double w, double h) {
  return w/ (h * h);
}
double bmiChecker(double w, double h){
  double a=computeBMI(w,h);
  if(a<18.5)
    cout << "underweight" << endl;
  else if (a<=25)
    cout << "normal" << endl;
  else if (a<=30)
    cout << "overweight" << endl;
  else {
    cout << "obese" << endl;
  }
}
int main() {
  double w, h;
  cin >> w >> h;
  cout << computeBMI(w, h) << endl;
  bmiChecker(60, 2);
  bmiChecker(60, 1.6);
  bmiChecker(60, 1.5);
  bmiChecker(60, 1.3);
}