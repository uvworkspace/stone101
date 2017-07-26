#include <iostream>
#include <string>
using namespace std;

void prline(int x, string ch){
  for(int i=1;i<=x;i++){
    cout << ch;
  }
}
void prettyScores(int scores, string names){
  for (int i=0;i<=names.length()-1;i++){
    prstr(names[i],8);
  }
  cout<<endl;
  
}

int main() {
  int midterm={6, 90, 100, 100, 9, 84};
  string names={"Chinese","Math","Physics"};
}