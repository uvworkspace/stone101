#include <iostream>
using namespace std;

void line(int n) {
  for (int i=0; i<n; i++) {
    cout << "*";
  }
  cout << endl;
}

void triangle(int n) {
  
  line(n);
  
}

int main() {
  triangle(6);
  return 0;
}