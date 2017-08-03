#include <iostream>
using namespace std;



double checkBMI(double kg , double m) {
  return kg / (m * m);
}

void computeBMI(double kg , double m){
  cout << "Your BMI is"   <<checkBMI(kg,m)<< endl;
  
}

int main() {
  double w, h;
  cin >> w >> h;
  cout << checkBMI(w, h) << endl;
  checkBMI(w, h);
  computeBMI(w,h);
}