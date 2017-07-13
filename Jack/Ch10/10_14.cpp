#include <iostream>
using namespace std;

int sum(int x, int y){
  return x+y;
}

int product(int x, int y){
  return x*y;
}

int compute(int (*f)(int, int), int x, int y){
  return f(x, y);
}

int main(){
  cout << sum(7, 13) << '\n';
  cout << product(7, 13) << '\n';
  cout << compute(&sum, 7, 13) << '\n';
  cout << compute(&product, 7, 13) << '\n';
}