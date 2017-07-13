#include <iostream>
using namespace std;

void iterative_print(const int *a, int n) {
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << "\n";
}

void recursive_print(const int *a, int n) {
  if(n > 0){
    cout << *a << " "; 
    recursive_print(a + 1, n - 1); 
  }else
    cout << "\n";
}

int main(){
  int list[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  recursive_print(list, 10);
  iterative_print(list, 10);
}