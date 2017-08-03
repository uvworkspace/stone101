#include <iostream>
using namespace std;

double computeBMI(double kg, double m)
{
  return kg / (m * m);
}

void bmiChecker(double weight, double height)
{
  double BMI = computeBMI(weight, height);
  if (BMI < 18.5)
  {
    cout << "underweight" << endl;
  }
  else if (BMI <= 25)
  {
    cout << "normal" << endl;
  }
  else if (BMI <= 30)
  {
    cout << "overweight" << endl;
  }
  else
  {
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