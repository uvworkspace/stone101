#include <iostream>
#include <iomanip>
using namespace std;
int main() {
   double d1 = 3.33 - 2.22,d2 = 7.77 - 6.66;
   cout << "d1 = " << d1 << '\n';
   cout << "d2 = " << d2 << '\n';
   if(d1 == d2)
      cout << "d1 is equal to d2\n";
   else
      cout << "d1 and d2 are different!\n";
   cout << "d1 = " << setprecision(20) << d1 << '\n';
   cout << "d2 = " << setprecision(20) << d2 << '\n';
}
