#include<iostream>
using namespace std;

void line(int len1,string ch,int len2){
  if(len1!=0){
    for(int i=0;i<len1;i++){
      cout<<" ";
    }
  }
  cout<<ch;
  if(len2>=1){
    for(int i=0;i<len2;i++){
      cout<<" ";
    }
    cout<<ch;
  }
  cout<<endl;
}
int main(){
  int s=0;
  cin>>s;
  for(int i=0;i<s;i++){
    line(s-i-1,"*",i*2-1);
  }
  for(int i=s-2;i>=0;i--){
    line(s-i-1,"*",i*2-1);
  }
}