/*--------------------------------------------------------------------------------*/  
/*  Problem: b018 "1000!" from 大數運算-大數乘整數                                */  
/*  Language: C++                                                                 */  
/*  Result: AC (4ms, 200KB) on ZeroJudge                                          */  
/*  Author: HongMJ1315 at 2017-01-24 14:40:51                                     */  
/*--------------------------------------------------------------------------------*/  
#include<iostream>
#include<vector>
using namespace std;  
  
int times(vector<int>& v,int n){  
    for(int i=0;i<v.size();i++){  
        v[i] = v[i]*n;  
    }  
    int len=v.size();
    for(int i=0;i<len;i++){  
        if(i>=v.size()) v.push_back(v[i]/10);
        else if(i+1<v.size()) v[i+1]=v[i]/10+v[i+1];
    }  
}

vector<int> fac(int n) {
  vector<int> v = { 1 };
  for(int i=2;i<n+1;i++){  
    times(v, i);  
  }
  return v;
}
  
int main(){  
    int k;
    while (cin>>k) {
      vector<int> v = fac(k);
      for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
      }
      cout<<endl;
    }
    
}
/*#include<iostream>  
using namespace std;  
int d = 1;  
int arr[1000];  
  
int times(int n){  
    for(int i=0;i<d;i++){  
        arr[i] = arr[i]*n;  
    }  
  
    for(int i=0;i<d;i++){  
        arr[i+1]=arr[i]/1000+arr[i+1];  
        arr[i]=arr[i]%1000;  
    }  
    if(arr[d]>0) d++;  
}  
  
int main(){  
    for(int i=0;i<1000;i++){  
        arr[i]=0;  
    }  
    int k;  
    cin>>k;  
    arr[0]=1;  
    for(int i=1;i<k+1;i++){  
        times(i);  
    }  
    for(int i=d-1;i>=0;i--){  
        if(9>=arr[i]&&arr[i]>=0&&i!=d-1){  
            cout<<"00"<<arr[i];  
        }     
        else if(99>=arr[i]&&arr[i]>=10&&i!=d-1){  
            cout<<"0"<<arr[i];  
        }  
        else{  
            cout<<arr[i];  
        }  
    }  
    cout<<endl;  
}*/  