#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 100;
string Id[MAX];
string title[MAX];
double price[MAX];
int pages[MAX];
  
bool byId(int a, int b){
  return Id[a] < Id[b];
}
int binarysearch(int index[], int len, string& id){
  //len=index.size();
  int low=0;
  int high=len-1;
  while(low<=high){
    int mid=(low+high)/2;
    if (Id[index[mid]]==id)
      return index[mid];
    else if (Id[index[mid]]>id)
      high=mid-1;
    else if (Id[index[mid]]<id)
      low=mid+1;
  }
  return -1;
}

int main ()
{
  int num;
  cin >> num;
  for (int i=0;i<num;i++) {
    cin >> Id[i] >> title[i] >> price[i]>>pages[i] ;
  }
  
  int index[num];
  for (int i=0; i<num; i++) {
    index[i] = i;
  }
  sort(index, index+num, byId);
  
  string id;
  while(cin>>id){
    int k=binarysearch(index,num,id);
    if (k >= 0) {
      cout << title[k] <<" " << price[k] <<" " << pages[k]<<endl;
    } else { 
      cout << "not found" << endl;
    }
  }
}