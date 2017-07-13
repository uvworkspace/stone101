#include<iostream>
#include<cmath>
using namespace std;

void factorization(int n){
  int c=0;
  int m=floor(sqrt(n));
  for(int i=2;i<m;i++){
    int count=0;
    while(n!=1&&n%i==0){
      count++; //指數
      n=n/i;
    }
    if(count!=0){
      if(c==0){
        cout<<i<<"^"<<count;
      }
      else{
        cout<<"+"<<i<<"^"<<count;
      }
      c++;
    }
  }
  if(c==0&&n!=1) cout<<n<<"^1";
  else if(n!=1) cout<<"+"<<n<<"^1";
}
int main(){
  int n;
  cin>>n;
  factorization(n);
}