/*
內容：
    小綠在數學課學到階乘的概念：1!=1、2!=1x2=2、3!=1x2x3=6、4!=1x2x3x4=24、N!=1x2x3x...x(N-1)xN，她好奇地用計算機去計算 N! 的答案，結果一下子就超過計算機可以顯示的 8 位數，你可以幫她解決這個問題嗎？
輸入說明：
    輸入一個正整數  N (1<=N<=1000)。
輸出說明：
    請輸出 N! 的結果。
範例輸入：
輸入1:
3  0
輸入2:
50
範例輸出 ：
輸出1:
265252859812191058636308480000000
輸出2:
30414093201713378043612608166064768844377641568960512000000000000
*/
#include<iostream>  
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
}  