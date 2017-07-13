#include <iostream>
using namespace std;

int main(){
  int a[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29},*p;
  p = &a[0];
  for(int i = 0; i < 10; i++,p++){
    cout << *p << "\n"; 
  }
}