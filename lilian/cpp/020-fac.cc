#include <iostream>
#include <vector>
using namespace std;

int times2(int result2[], int len, int n){
  long carry=0;
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
void fac2(int result2[],int max,int n){
  result2[0]=1;
  int len = 1;
  for (int j=2; j<=n;j++){
    len = times2(result2,len,j);
  }
  for (int i=len-1; i>=0;i--){
    cout << result2[i];
  }
  cout <<endl;
}

int main(){
  int result2[1000];
  fac2 (result2, 1000, 30);
}