#include <iostream>
using namespace std;
int main() {
   int x, y;
   cout << "Please enter two integers to divide:";
   cin >> x >> y;
   // check y to avoid the consition y is equal to zero
   if(y != 0)
      cout << x << "/" << y << " = "
      << x/y << '\n';
   else
      cout << "Error!! y can not be zero\n";
}
