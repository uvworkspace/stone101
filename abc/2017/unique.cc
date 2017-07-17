#include<iostream>
#include<vector>
#include <algorithm>
#include <map>
using namespace std;
bool notin(int x, vector<int>& arr){
  for(int n:arr){
    if(n==x){
      return false;
    }
  }
  return true;
}

int uniq1(vector<int>& arr){
  vector<int> c;
  for(int n:arr){
    if (notin(n,c)) {
      c.push_back(n);
    }
  }
  for(int n:c){
    cout<<n <<" ";
  }
  cout<<endl;

}
int uniq2(vector<int> arr){
  vector<int>carr;
  for (int n:arr){
    carr.push_back(n);
  }
  sort(carr.begin(), carr.end());
  cout <<carr[0]<<" ";
  for (int q=1;q <carr.size();q++){
    if (carr[q]!=carr[q-1]){
      cout<<carr[q]<<" ";
    }
  }
  cout<<endl;
}

int uniq2a(vector<int>& arr){
  vector<int> carr = arr;
  sort(carr.begin(), carr.end());
  cout <<carr[0]<<" ";
  for (int q=1;q <carr.size();q++){
    if (carr[q]!=carr[q-1]){
      cout<<carr[q]<<" ";
    }
  }
  cout<<endl;
}

int uniq3(vector<int>& arr){
  std::map<int,bool> cnts;
  for (int n:arr){
    if (!cnts[n]){
      cnts[n]=true;
      cout << n<<" ";
    }
  }
  cout << endl;
}
void pr(vector<int>& v) {
  for (int n : v) {
    cout << n << ",";
  }
  cout << endl;
}
int arr[1000];
int len=0;

bool notinto(int x, int arr[],int len){
  for(int n=0;n<len;n++){
    if(arr[n]==x){
      return false;
    }
  }
  return true;
}

void pr2(int a[], int len) {
  for (int i=0; i<len; i++) {
    cout << a[i] << ",";
  }
  cout << endl;
}
int uniq4(int arr[],int len){
  int arr1[1000];
  int len1=0
  for(int n=0;n<len;n++){
    if (notinto(arr[n],arr1[],len1)){
      arr1[len]=arr[n];
      len++;
    }
    pr2(arr1,len1);
  }
  for(int n:c){
    cout<<n <<" ";
  }
  cout<<endl;

}


int main(){
  vector<int>a={5,9,3,52,3,5};
  pr(a);
  uniq1(a);
  pr(a);
  uniq2a(a);
  pr(a);
  uniq3(a);
  pr(a);
  int x
  while (cin >> x) {
    arr[len] = x;
    len++;
  }
  uniq4(arr[],len)
}
