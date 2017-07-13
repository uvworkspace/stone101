#include <iostream>
using namespace std;
int main(){
  double m,h;
  const double G0 = 9.78046;
  cout << "A ball at a high building,and it will drop to the ground.\n"
  << "Please enter the height of the building and the mass of the ball :\n";
  cin >> h >> m;
  cout << "Ok. Thank you. The kinetic energy of the ball is " << m*G0*h
  << " when it arrives the ground.";
}