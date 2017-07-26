#include <iostream>
using namespace std;

void prline(int x, char ch){
  for(int i=1;i<=x;i++){
    cout << ch;
  }
}
void printCake(int x){
  if (x==1){
    cout << "*"<<endl;
  }
  else {
    cout << "*" << endl;
    for (int i=0; i<=x-3; i++){
      cout <<"*";
      prline (i,'-');
      cout <<"*"<<endl;
    }
    prline (x,'*');
    cout << endl;
  }
}

int main() {
  int n;
  while (std::cin >> n) {
    printCake(n);
  }
}


