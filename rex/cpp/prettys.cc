#include <iostream>
#include <string>
using namespace std;
void prNum(int n,int width){
  int nums = n;
  int len = 0;
  while(nums>0){
    nums/=10;
    len+=1;
  }
  for (int i=width;i>len;i--){
      cout<<" ";
    }
  cout<<n;
}
void prLine(string word,int width){
  for (int i=width;i>word.length();i--){
      cout<<" ";
    }
  cout<<word;
}
void prSub(int nsub,int width){
  prLine("",width);
  for (int i = 0;i<nsub;i++){
    string w;
    cin>>w;
    prLine(w,width);
  }
  prLine("Average",width);
  cout<<endl;
}
int prScore(int n,int w, int subtotals[]){
  int ppl =0;
  string name;
  while(cin>>name){
    ppl+=1;
    prLine(name,w);
    int sum = 0;
    for (int i = 0;i<n;i++){
      int num;
      cin>>num;
      subtotals[i]+=num;
      prNum(num,w);
      sum+=num;
    }
    prNum(sum/n,w);
    cout<<endl;
  }
  return ppl;
}
void prSubaverage(int n,int w,int ppl, int subtotals[]){
  prLine("Average",w);
  for (int i = 0 ;i<n;i++){
    int subavg = subtotals[i]/ppl;
    prNum(subavg,)
  }
}
void prettyScores(const int n,const int w){
  prSub(n,w);
  int subtotals[n];
  int ppl = prScore(n,w, subtotals);
  prSubaverage(n,w, ppl, subtotals);
}
int main() {
  int nsub, width;
  cin >> nsub >> width;
  prettyScores(nsub, width);
}

