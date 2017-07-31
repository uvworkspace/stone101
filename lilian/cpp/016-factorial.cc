#include <iostream>
#include <vector>
using namespace std;

void times2(vector<int>& result2, int n){
  int carry=0;
  for (int i=0;i<result2.size();i++){
    carry+=result2[i]*n;
    result2[i]=carry%10;
    carry/=10;
  }
  while(carry>0){
    result2.push_back(carry%10);
    carry/=10;
  }
}

void fac2(int n){
  vector<int> result2;
  result2.push_back(1);
  for (int j=2; j<=n;j++){
    times2(result2,j);
  }
  for (int i=result2.size()-1; i>=0;i--){
    cout << result2[i];
  }
  cout <<endl;
}


int main(){
  fac2 (30);
}