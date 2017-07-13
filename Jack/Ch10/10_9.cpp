#include <iostream>
using namespace std;
void iterative_star(int n){
  while (n > 0){
    cout << "*";
    n--;
  }
  cout << '\n';
}

void recursive_star(int n){
  if (n > 0){
    cout << "*";
    recursive_star(n - 1);
  }else
    cout << '\n';
}

int main() {
  iterative_star(7);
  iterative_star(18);
  iterative_star(6);
  iterative_star(12);
  cout << "================\n";
  recursive_star(7);
  recursive_star(18);
  recursive_star(6);
  recursive_star(12);
}
