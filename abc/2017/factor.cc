#include <iostream>
using namespace std;
int factor(int a){
  int pr=2;
  int nup=0;
  int dig=a;
  int cnt = 0;
  while (pr*pr<=dig){
    int pow=0;
    while(dig%pr==0 ){
      dig=dig/pr;
      pow=pow+1;
    }
    if (pow>0){
      if (nup!=0){
        cout <<"*";
      }
      cout << pr <<  "^" << pow;
      nup=nup+1;
    }
    pr=pr+1;
  }
  if (dig>1){
    cout <<"*" <<dig;
  }
  cout << endl;
}
int main(){
  factor(3600);
}