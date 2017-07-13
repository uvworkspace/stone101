#include <iostream>
using namespace std;
int main() {
    int a = 1, b = 10, c = 100, d = 1000;
    cout << "a=" << a << ", b=" << b
    << ", c=" << c << ", d=" << d << '\n';
    b = a++;
     cout << "a=" << a << ", b=" << b
    << ", c=" << c << ", d=" << d << '\n';
    d = ++c;
     cout << "a=" << a << ", b=" << b
    << ", c=" << c << ", d=" << d << '\n';
}
