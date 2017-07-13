#include <iostream>
#include <cmath>
using namespace std;
bool is_equal(double a, double b, double difference){
  return fabs(a - b) < difference;
}
int main(){
  for(double i = 0.0; !is_equal(i, 1.0, 0.0001); i += 0.1)
    cout << "i = " << i << '\n';
}
