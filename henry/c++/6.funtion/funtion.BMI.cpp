#include <iostream>
using namespace std;

double computeBMI(double kg, double m) {
  return kg / (m * m);
}

void checkBMI(double kg, double m) {
  cout << "Your BMI is " << computeBMI(kg, m) << "." << endl;
}

int main() {
  double w, h;
  cin >> w >> h;
  cout << computeBMI(w, h) << endl;
  checkBMI(w, h);
}