#include <iostream>
using namespace std;

int num (int n){
  int x=0;
  for (int i=0;i<=n;i++){
    x=x+i*2;
    cout << x << endl;
  }
}


int main(){
  num(10);
}
