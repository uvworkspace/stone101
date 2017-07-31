#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string arrId[100];
string arrTitle[100];
double arrPrice[100];
int arrPage[100];
int arrSeq[100];





void makeArray( int num){
  for (int i=0;i<num;i++){
    arrSeq[i]=i;
    arrId[i]="";
    arrTitle[i]="";
    arrPrice[i]=0;
    arrPage[i]=0;
  }
  for (int i=0;i<num;i++){
    cin>>arrId[i]>>arrTitle[i]>>arrPrice[i]>>arrPage[i];
  }
}
bool byId(int a,int b) { return arrId[a] < arrId[b];}
int bSearch(string Id,int start,int end){
  if (start >= end)return - 1;
  int mid = (start + end)/2;
  if (arrId[arrSeq[mid]] == Id)return mid;
  if (arrId[arrSeq[mid]] < Id) return bSearch(Id, mid + 1, end);
  else return bSearch(Id, start, mid);
}
int main(){
  int num;
  cin>>num;
  /*string arrId[num];
  string arrTitle[num];
  double arrPrice[num];
  int arrPage[num];
  int arrSeq[num];*/
  makeArray(num);
  sort(arrSeq,arrSeq+num,byId);
  string Id;
  while(cin>>Id){
    int position;
    position = bSearch(Id,0,num);
    if (position == -1) cout<<"not found"<<endl;
    else cout<<"Id: "<<arrId[arrSeq[position]]<<" "<<arrTitle[arrSeq[position]]<<" $: "<<arrPrice[arrSeq[position]]<<" "<<arrPage[arrSeq[position]]<<" pages."<<endl;
  }
}
