#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double square(double input){
  double d,root=1.0;
  do{ 
    root = (root+input/root) / 2;
    d = root * root - input; 
  }while(d > 0.0001 || d < -0.0001);
  return root;
}
int main(){
  for(double x = 1.0; x <= 10.0; x += 0.5)
    cout << setw(7) << square(x) << " : " << sqrt(x) << '\n';
}