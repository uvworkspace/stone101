#include <iostream>
using namespace std;

void prLine(char m , int len){
  cout<<'*';
  for(int k = 0; k<len ; k++){
    cout<<m;
  }
  cout<<"*" << endl;
}



void printCake(int n ){
   
  cout<<"*\n";
  if (n < 2) return;

  for (int i = 0; i<n-2 ; i++){
     prLine('-',i);
    
  }
  for (int h =1 ; h<=n ;h++){
    cout<<"*";
  }
  cout << endl;
}

int main() {
  int p;
  while (std::cin >> p) {
    printCake(p);
  }
}
