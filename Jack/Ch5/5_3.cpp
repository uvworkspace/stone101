#include <iostream>
using namespace std;
int main(){
   int x, y, result;
   cout << "Please enter two integers to divide:";
   cin >> x >> y;
   // check y to avoid the consition y is equal to zero
   if (y != 0) {
      result = x/y;
      cout << x << " divided by " << y << " is "
      << result << '\n';
   }
}
