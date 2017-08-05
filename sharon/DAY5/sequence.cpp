#include <iostream>
using namespace std;

int ascending(int n){
  for(int i=0;i<n;i++){
    cout << i << " ";
  }
}

int evenN(int x){
  for(int i=0;i<=x;i+=2){
    cout << i << " ";
  }
}
int descending(int n){
  for(int i=n;i>=0;i--){
    cout << i << " ";
  }
}

int minusfive(int x){
  for (int i=100 ; i>=100-x*5 ; i-=5){
    cout << i << " ";
  }
}

int main (){
  int x;
  int n;
  cin >> n >> x;
  ascending( n);
  evenN( x);
  descending(n);
  minusfive(x);
}