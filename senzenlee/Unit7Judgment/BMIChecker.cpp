#include <iostream>
using namespace std;
double computeBMI(double kg, double cm) {
  return kg / (cm * cm) * 10000;
}
void checkBMI(double kg, double cm) {
  double BMI = computeBMI(kg, cm);
  if (BMI < 18.5) {
    cout << "underweight" << endl;
  }
  else if (BMI < 25) {
    cout << "normal" << endl;
  }
  else if (BMI < 30) {
    cout << "overweight" << endl;
  }
  else  
    cout << "obese" << endl;
}

int main() {
  double w, h;
  cin >> w >> h;
  cout << computeBMI(w, h) << endl;
  checkBMI(w, h);
}