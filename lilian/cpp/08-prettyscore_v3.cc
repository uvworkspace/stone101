#include <iostream>
#include <string>
using namespace std;

void prline(int x, string ch){
  for(int i=1;i<=x;i++){
    cout << ch;
  }
}
void prettyScores (int num, int w){
  string sub[num];
  for (int i=0;i<num;i++){
    cin>> sub[i];
  }
  prstr(sub[i],w)
}

int main() {
  int nsub, width;
  cin >> nsub >> width;
  prettyScores(nsub, width);
}