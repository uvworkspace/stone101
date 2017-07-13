#include <iostream>
using namespace std;

/*
This is a bad example of swap
void swap(int a, int b){
  int temp = a;
  a = b;
  b = temp;
}
*/

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int n1 = 101, n2 = 86;
  cout << "n1 = " << n1 << ", n2 = " << n2 << '\n';
  swap(&n1, &n2);
  cout << "n1 = " << n1 << ", n2 = " << n2 << '\n';
}