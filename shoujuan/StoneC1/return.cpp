#include<iostream>
using namespace std;

int add (int a, int b){
  return a+b;
}
int main(){
  int a = 5;
  int b = 10;
  int x = add (a,b);
  cout<< x <<endl;
}