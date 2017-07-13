#include <iostream>
using namespace std;

int main(){
  int a[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29},*front, *back, *current;
  current = front = a; 
  back = a + 9; 
  while (current <= back){
    cout << *current << "\n";
    current++; 
  }
}
