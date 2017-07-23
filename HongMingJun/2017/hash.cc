#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int arr[10000];

bool find(vector<int>& arr,int ch){
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
}
void uniq2(vector<int>& arr){
  vector<int> out = arr;
  sort(out.begin(), out.end());
  for(int i=0;i<out.size();i++){
    if(i==0) cout<<out[i];
    else if(out[i-1]!=out[i]) cout<<" "<<out[i];
  }
  cout<<endl;
}
void uniq3(vector<int>& arr){
  map<int,int> cnts;
  for(int i=0;i<arr.size();i++){
    if(cnts[arr[i]]!=1){
      cout<<arr[i]<<" ";
      cnts[arr[i]]=1;
    }
  }
  cout<<endl;
}
bool find2(int arr[],int len,int ch, int start){
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
}
void uniq5(int arr[],int len){
  sort(arr,arr+len );
  for(int i=0;i<len;i++){
    if(i==0) cout<<arr[i];
    else if(arr[i-1]!=arr[i]) cout<<" "<<arr[i];
  }
  cout<<endl;
}
int main(){
  vector<int> s={1,1,23,443,4,5,4,23,44,5};
  int arr[10]={1,1,23,443,4,5,4,23,44,5};
  uniq1(s);
  uniq2(s);
  uniq3(s);
  uniq5(arr,10);
  int len=0;
  int x;
  while(cin>>x){
    arr[len]=x;
    len++;
  }
  uniq4(arr,len);
}