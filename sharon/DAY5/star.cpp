#include <iostream>
using namespace std;

int pr(int m ,int n){
  for(int i=0;i<m;i++){
    for(int j=0; j<n ;j++){
      cout << "*";
    }
    cout << endl;
  }
}

int main (){
  pr(7,6); 
}