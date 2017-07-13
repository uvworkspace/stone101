#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double one = 1.0, one_fifth = 1.0/5.0;
    double zero = one - one_fifth - one_fifth - one_fifth
    - one_fifth - one_fifth;
    cout << setprecision(20)  << "one = " << one << ", one_fifth = " << one_fifth
    << ", zero = " << zero << '\n';
}
