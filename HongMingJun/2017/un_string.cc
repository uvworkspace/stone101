#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

int arr[10000];

/*bool find(vector<int>& arr,int ch){
  for(int i=0;i<arr.size();i++){
    if(arr[i]==ch) return 1;
  }
  return 0;
}
void uniq1(vector<int>& arr){
  vector<int> v;
  for(int i=0;i<arr.size();i++){
    if(!find(v,arr[i])) v.push_back(arr[i]);
  }
  for (int n : v) {
    cout << n<<" ";
  }
  cout<<endl;
}*/
void uniq2(vector<string>& arr){
  for(int i=1;i<arr.size();i++){
    if(arr[i-1]==arr[i]){
      
    }
  }
  cout<<endl;
}
void uniq3(vector<string>& arr){
  map<string ,int> cnts;
  for(int i=0;i<arr.size();i++){
     cnts[arr[i]]++;
  }
  for(auto pair : cnts) {
    cout << "[" << pair.first << "] " << pair.second << endl;
  }
}
/*bool find2(int arr[],int len,int ch, int start){
  for(int i=start;i<len;i++){
    if(arr[i]==ch) return 1;
  }
  return 0;
}
void uniq4(int arr[],int len){
  for(int i=0;i<len;i++){
    if(!find2(arr,len,arr[i], i+1)) cout<<arr[i]<<" ";
  }
  cout<<endl;
}*/
int main(){
vector<string> v;
v.push_back("a");
v.push_back("a");
v.push_back("b");
v.push_back("b");
v.push_back("c");
//  uniq1(s);
  uniq2(v);
  //uniq3(v);
/*  int len=0;
  int x;
  while(cin>>x){
    arr[len]=x;
    len++;
  }
  uniq4(arr,len);*/
}