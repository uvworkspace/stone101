#include <iostream>
using namespace std;
unsigned int factorial(int n){
  if(n<0){
    cout<<"the input can not be negtive\n";
    return 0;
  }
  if (n == 0)
    return 1;
  else
    return n * factorial(n - 1);
}

int main(){
  for(int i=0;i<10;i++)
    cout << i << "! = " <<  factorial(i) << endl;
}
