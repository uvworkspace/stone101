#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Please enter two integers: ";
    cin >> x >> y;
    cout << x << " & " << y << " = " << (x & y) << '\n';
    cout << x << " | " << y << " = " << (x | y) << '\n';
    cout << x << " ^ " << y << " = " << (x ^ y) << '\n';
    cout << "∼" << x << " = " << ~x << '\n';
    cout << x << " << " << 2 << " = " << (x << 2) << '\n';
    cout << x << " >> " << 2 << " = " << (x >> 2) << '\n';
}