#include <iostream>
using namespace std;

void print_list(int a[], int n){
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << '\n';
}

void clear(int a[], int n){
  for(int i = 0; i < n; i++)
    a[i] = 0;
}

int main(){
  int list[] = { 0, 101, 37, 87};
  print_list(list, 4);
  clear(list, 4);
  print_list(list, 4); 
}