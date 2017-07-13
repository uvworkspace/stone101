#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int size,row=1,col=1,width=1,temp; // variable initiallize
  cout << "Please enter the table size: ";
  cin >> size;
  temp=size*size;
  //get the appropriate width
  while(temp>0){
    temp/=10;
    width++;
  }
  // Print the result
  while(row <= size){ 
    while(col <= size){
      cout << setw(width) << row*col;
      col++; 
    }
    cout << '\n';
    col=1;
    row++; 
  }
} 