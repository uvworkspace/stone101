#include<iostream>
using namespace std;

int for1(int n){
  for(int i=0;i<n;i++){
    cout<<i<<" ";
  }
  cout<<endl;
}
int for2(int n){
  for(int i=0;i<n;i++){
    cout<<n-i<<" ";
  }
  cout<<endl;
}
int while1(int n){
  int i=0;
  while(i<n){
    cout<<i<<" ";
    i++;
  }
  cout<<endl;
}
int while2(int n){
  int i=0;
  while(i<=n){
    cout<<n-i<<" ";
    i++;
  }
  cout<<endl;
}
int main(){
  for1(10);
  for2(10);
  while1(10);
  while2(10);
}