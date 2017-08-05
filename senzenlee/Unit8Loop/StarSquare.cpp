#include <iostream>
using namespace std;
void prRect(int m, int n) {
  for (int i = 0; i < m; i ++) {
    for (int i = 0; i < n; i++) {
      cout << "*"; 
    }
    cout << endl;
  }
}
int main() {
  prRect(3,7);
  prRect(7,3);
}