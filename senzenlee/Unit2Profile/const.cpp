#include <iostream>
using namespace std;
void electron_voltage(int x) {
  const double electron_voltage = 1.6e-19;
  cout << x * electron_voltage << endl;
}
void c(int x) {
  const double c = 3e8;
  cout << x * c << endl;
}
int main() {
  electron_voltage(3);
  c(2);
}