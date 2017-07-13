#include<iostream>
using namespace std;

int GCD(int x,int y){
  int max=x>y?x:y;
  int min=x<y?x:y;
  while (max%min!=0) {
    max=max%min;
    int tmp=max;
    max=min;
    min=tmp;
  }
  return min;
}

int main(){
  int n1=100,n2=500;
//  cin>>n1>>n2;
  int out=GCD(n1,n2);
  cout<<out<<endl;
}