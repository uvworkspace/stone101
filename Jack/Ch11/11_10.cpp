#include <iostream>
using namespace std;

void print_list(int a[], int n){
  for(int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << '\n';
}

int sum(int a[], int n){
  int sum = 0;
  for(int i = 0; i < n; i++)
    sum += a[i];
  return sum;
}

int main(){
  int list[] = { 0, 101, 37, 87};
  print_list(list, 4);
  cout << sum(list, 4) << '\n';
  for (int i = 0; i < 4; i++)
    list[i] = 0;
  print_list(list, 4);
  cout << sum(list, 4) << '\n';
}