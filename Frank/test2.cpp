#include <iostream>
using namespace std;

void ascending(int n){
  for (int i=0; i<=n; i++){
    cout << i << " ";
  }
  cout << endl;
}

int main(){
  for(int i=1; i<=5; i++){
    cout << "\t" << i;
  }
  cout << endl;
}