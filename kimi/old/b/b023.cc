#include <iostream>  
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int No(int a,int b) {
  return 6-a-b;
}

int ring(int top,int bottom,int start,int finish) {
  if (top==bottom) {
    cout << "Ring " << bottom << " from " << start << " to " << finish << endl;
    return 0;
  }
  ring (top,bottom-1,start,No(start,finish));
  ring (bottom,bottom,start,finish);
  ring (top,bottom-1,No(start,finish),finish);
}

int main () {
  int n;
  cin >> n;
  ring(1,n,1,3);
}