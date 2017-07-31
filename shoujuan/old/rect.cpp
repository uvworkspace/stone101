#include <iostream>
using namespace std;
void printCake(int base){
  cout<<"*"<<endl;
  if (base<2){
    return;
  }
  for (int i=0;i<base-2;i++){
    cout<<"*";
    for (int j=0;j<i;j++){
      cout<<"-";
    }
    cout<<"*"<<endl;
  }
  for (int i=0;i<base;i++){
    cout<<"*";
  }
  cout<<endl;
}
int main() {
  int n;
  while (std::cin >> n) {
    printCake(n);
  }
}