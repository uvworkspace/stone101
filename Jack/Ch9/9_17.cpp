#include <iostream>
#include <cmath>
using namespace std;
bool isequal(double a, double b, double difference){
  return fabs(a - b) < difference;
}
double square_root(double input){
  double root = 1;
  do{
    root = (root + input/root) / 2;
  }while(!isequal(root*root, input, 0.0001));
  return root;
}
int main(){
  for(double d = 0.0; d < 3000.0; d += 0.0001){
    if(!isequal(square_root(d), sqrt(d), 0.001))
      cout << "the square_root of " << d << " by cmath is " << sqrt(d)
      << "\nbut computed by square_root() is " << square_root(d) << endl << endl;
  }
}