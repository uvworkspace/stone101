#include <iostream>
#include <vector>
//#include <algorithm>//std::remove_if
//#include <numeric>//std::iota
using namespace std;
//for(int i=3;i*i<N;i+=2) if(!p[i]) for(int j=i*i;j<N;j+=i+i) p[j]=1;

/*vector<int> eratosthenes(int max){
  vector<int> vi(max+1);//0, 1, 2, ..., max
  iota(vi.begin(), vi.end(), 0);
  if(max>=2){
    int prime=2;
    while(prime*prime<=max){//2 to sqrt(max)
      for(size_t index=prime*2; index<vi.size(); index+=prime){
        vi[index]=0;//Rule out this number.
      }
      for(prime++; prime*prime<=max; prime++){
        if(vi[prime]>0){
          break;//Jump to next non-zero.
        }
      }
    }
  }
  vi.erase(std::remove_if(vi.begin(), vi.end(), [](int i)->bool{
    return i<=1;
  }), vi.end());//Remove all zeros and the one.
  return vi;
}*/

vector<int> eratosthenes(int N){
  vector<int> p(N+1);
  for (int i=0; i<N+1; i++){
    p[i]=i;
  }
  for (int i=0; i<N+1;i+=2){//even number erased
    p[i]=1;
  }
  p[2]=2;//keep 2
  for(int i=3;i*i<N;i+=2){
    if(!p[i]){
       for(int j=i*i;j<N;j+=i+i){
         p[j]=1;
      }
    } 
  }
  vector<int> result;
  for (int i=1; i<N+1; i++){
    if (p[i]!=1){
      result.push_back(p[i]);
    }
  }
  return result;
}
  


int main(){
  int n;
  while (cin>>n){
    vector<int> result;
    result= eratosthenes(n);
    for (int i=0; i< result.size();i++){
      cout << result[i]<< " ";
    }
  }
}