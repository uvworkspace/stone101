#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
  srand(5288);// the same seed always produce the same sequence.
  for (int i = 0; i < 100; i++){
    cout << rand() << " ";
  }
}