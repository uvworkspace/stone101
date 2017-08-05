#include <iostream>
using namespace std;

void sumN(int n){
  int x=0;
  for(int i=1;i<=n;i++){
    x=x+i;
  }
  cout << x <<endl;
}

int sumevens(int x){
  int sum=0;
  for(int i=1;i<=x;i++){
    sum=sum+i*2;
  }
    cout << sum << endl;
  return sum;
}

int multiple(int n){
  int x=1;
  for(int i=1;i<=n;i++){
    x=x*i;
  }
  cout << x <<endl;
  return x;
}

int main(){
  sumN(6);
  sumevens(5);
  multiple(4);
}