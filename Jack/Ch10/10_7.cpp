#include <iostream>
using namespace std;
unsigned int factorial(int n){
  unsigned int product=1;
  if(n<0){
    cout<<"the input can not be negtive\n";
    return 0;
  }else if(n==0)
    return 1;
  for(int i=1;i<=n;i++){
    product*=i;
  }
  return product;
}

int main(){
  for(int i=0;i<10;i++)
    cout << i << "! = " <<  factorial(i) << endl;
}