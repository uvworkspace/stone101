#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int times(int n,char dec[],int len, int max){
  int tmp = 0;
  for(int i =0; i<len;i++){
    tmp += dec[i]*n;
    dec[i]= tmp%10;
    tmp/=10;
    if((i==len-1) and (tmp>0)) {
      dec[i+1]=0;
      len+=1;
    } 
    if (len>=max) return false;
    }
  return len;
}
int factorial(int n, char dec[],int max){
  dec[0]=1;
  int len =1;
  for(int i=2;i<=n;i++){
      len = times(i,dec,len, max);
  }
  return len;
}
void prDec(char dec[],int len){
  
  
  for (int i =len-1;i>=0;i--){
    cout<<(char)(dec[i]+'0');
  }
  cout<<endl;
}
int main(){
  int n;
  char dec[1000];
  while (cin>>n) {
    int len = factorial(n,dec,1000);
    prDec(dec,len);
  }
}