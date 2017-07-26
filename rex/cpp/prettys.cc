#include <iostream>
#include <string>
using namespace std;
void printS(int a, int b, int c, int arr[]){
   for (int k = 0;k<=c;k++){
    for (int l = 0; l<=a;l++){
      for (int m = b; m > sizeof(arr[(a+1)*k+l])/sizeof(int);m--){
        cout<<" ";
      }
      cout<<arr[(n+1)*k+l]<<endl;
    }
  }
}
void prettyScores(const int n,const int w){
  int arr[(n+1)*(p+1)];
  for (int i = 1; i<=(n+1)*(p+1);i++){
    cin>>arr[i];
  }
  printS(n,w,p,arr);
}
int main() {
  int nsub, width;
  cin >> nsub >> width;
  prettyScores(nsub, width);
}

