#include <iostream>;
using username std;

int sum(int n){
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

int sumEvens(int x){
  int sumE = 0;
  for (int i = 0; i <= x; i += 2) {
    sum += i;
  }
  return sumE;
}

int multiple(int n){
  int mult = 0;
  for (int i = 1; i <= n; i*n) {
    mult += i;
  }
  return mult;
}

int main() {
  cout << sumN(10) << endl;
  cout << sumEvens(5) << endl;
  cout << multiple(5) << endl;
  return 0;
}