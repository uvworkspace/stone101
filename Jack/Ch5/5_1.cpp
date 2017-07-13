#include <iostream>
using namespace std;
int main() {
    // bool type variables
    bool a = true, b = false;
    cout << "a = " << a << ", b = " << b << '\n';
    // reassign to a
    a = false;
    cout << "a = " << a << ", b = " << b << '\n';
    // mix integers and bools
    a = 1;
    b = 1;
    cout << "a = " << a << ", b = " << b << '\n';
    // assign boolean value to an integer
    int x = a, y = true;
    cout << "a = " << a << ", b = " << b
    << ", x = " << x << ", y = " << y << '\n';
    // what happen if assign a value which is not 1 nor 0 ?
    a = 123; 
    b = -321; 
    cout << "a = " << a << ", b = " << b << '\n';
}
