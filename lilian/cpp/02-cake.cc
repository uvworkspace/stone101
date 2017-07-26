#include <iostream>
using namespace std;

void printCake(int x){
  if (x==1){
    cout << "*"<<endl;
  }
  else {
    cout << "*" << endl;
    for (int i=0; i<=x-3; i++){
      cout <<"*";
      for (int j=1; j<=i;j++){
        cout << "-";
      }
      cout <<"*"<<endl;
    }
    for (int i=1; i<=x;i++){
         cout << "*";
    }
    cout << endl;
  }
}

int main() {
  int n;
  while (std::cin >> n) {
    printCake(n);
  }
}


