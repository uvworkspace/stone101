#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void times(int n,vector<int>& dec){
  int tmp = 0;
  for(int i =0; i<dec.size();i++){
    tmp += dec[i]*n;
    dec[i]= tmp%10;
    tmp/=10;
    if((i==dec.size()-1) and (tmp>0)) {dec.push_back(0);}
  }
}
int prDec(vector<int>& dec){
  int len = dec.size();
  for (int i =len-1;i>=0;i--){
    cout<<dec[i];
  }
  cout<<endl;
}
int main(){
  int n;
  vector<int> dec ={1};
  cin>>n;
  for(int i=2;i<=n;i++){
    times(i,dec);
  }
  prDec(dec);
}