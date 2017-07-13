#include <iostream>
using namespace std;
int main() {
    unsigned int x = 4294967293;  
    // the largest value of "unsigned int" is limited
    // Let me see, what will happen?
    cout << x << " + 1 = " << x + 1 << '\n';
    cout << x << " + 2 = " << x + 2 << '\n';
    cout << x << " + 3 = " << x + 3 << '\n';
}