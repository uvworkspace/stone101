#include <iostream>
using namespace std;
int main(){
  int size,row=1,col=1; // variable initiallize
  cout << "Please enter the table size: ";
  cin >> size;
  // Print the result
  while(row <= size){ 
    while(col <= size){
      cout << row*col << " "; 
      col++; 
    }
    cout << '\n';
    col=1;//value reset
    row++; 
  }
}