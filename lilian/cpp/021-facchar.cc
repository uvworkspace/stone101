#include <iostream>
#include <vector>
using namespace std;

int times2(char result2[], int len, int n){
  int carry=0;
  for (int i=0;i<len;i++){
    carry+=result2[i]*n;
    result2[i]=carry%10;
    carry/=10;
  }
  while(carry>0){
    result2[len]=carry%10;
    len++;
    carry /= 10;
  }
  return len;
}
void fac2(char result2[],int max,int n){
  result2[0]=1;
  int len = 1;
  for (int j=2; j<=n;j++){
    len = times2(result2,len,j);
  }
  for (int i=0; i<len/2;i++){
    //cout <<(char)('0'+result2[i]);
    char ch=result2[i]+'0';
    result2[i]=result2[len-i-1]+'0';
    result2[len-i-1]=ch;
  }
  if (len%2==1) result2[len/2]+='0';
  result2[len]='\0';
  cout <<result2<<endl;
}


int main(){
  char result2[1000];
  int n;
  while(cin>>n){
    fac2 (result2, 1000, n);
  }
  
  
}