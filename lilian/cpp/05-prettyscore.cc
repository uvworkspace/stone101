#include <iostream>
#include <string>
using namespace std;

void prline(int x, string ch){
  for(int i=1;i<=x;i++){
    cout << ch;
  }
}

void prettySub (int num, int w){
      string text;
      int count=0;
      while (cin >> text){
        if (w >= text.length()){
          if (count==0){
            prline(w," ");
            prline(w-text.length()," ");
            cout << text;
            count++;
          }
          else{
            prline(w-text.length()," ");
            cout << text;
          }
        }
        else {
          cout <<"width not enough";
        }
      }
}

void prettyData (int num, int w){
  
}

void prettyScores (int num, int w){
  prettySub(num, w);
  //prettyData(num, w);
}

int main() {
  int n, width;
  cin >> n >> width;
  //cin >> nsub >> width;
  prettyScores(n, width);
  //prettyScores(8);
}