#include <iostream>
#include <string>
using namespace std;

void prline(int x, string ch){
  for(int i=1;i<=x;i++){
    cout << ch;
  }
}
void prstr(string str, int w){
  prline(w-str.length()," ");
  cout << str;
}

void prnum(int num, int w){
  int cnt=1;
  int Num=num;
  while(Num>=10){
    Num/=10;
    cnt++;
  }
  prline(w-cnt," ");
  cout << num;
}

void prettyScores (int num, int w){
  string sub[num];
  prline(w," ");
  for (int i=0;i<num;i++){
    cin>> sub[i];
    prstr(sub[i],w);
  }
  prstr("Average",w);
  cout << endl;
  string names;
  int ppl=0;
  int subscore[num];
  for (int i=0;i<num;i++){
    subscore[i]=0;
  }
  //int score[num];
  while (cin>>names){
    prstr(names,w);
    int total=0;
    int score;
    for (int i=0;i<num;i++){
      cin>> score;
      prnum(score,w);
      total+=score;
      subscore[i]+=score;
    }
    ppl++;
    //prstr(names,w);
    //for (int i=0;i<num;i++){
    //  prnum(score[i],w);
    //}
    prnum(total/num,w);
    cout << endl;
  }
  prstr("Average",w);
  for (int i=0;i<num;i++){
    prnum(subscore[i]/ppl,w);
  }
}


int main() {
  int nsub, width;
  cin >> nsub >> width;
  prettyScores(nsub, width);
}