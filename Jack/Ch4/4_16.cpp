#include <iostream>
using namespace std;
int main() {
    double one = 1.0, one_sixteenth = 1.0/16.0;
    double zero = one - one_sixteenth - one_sixteenth - one_sixteenth - one_sixteenth 
    - one_sixteenth - one_sixteenth - one_sixteenth - one_sixteenth - one_sixteenth 
    - one_sixteenth - one_sixteenth - one_sixteenth - one_sixteenth - one_sixteenth 
    - one_sixteenth - one_sixteenth;
    cout << "one = " << one << ", one_sixteenth = " << one_sixteenth
    << ", zero = " << zero << '\n';
}
