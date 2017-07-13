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
  // Print the title space
  cout<<"  ";
  temp=1;
  while(temp<=width){
    cout << " ";
    temp++;
  }
  // Print col head
  while(col <= size){
    cout << setw(width) << col; 
    col++;
  }
  cout << '\n';
  col=1;
  // Print the line ------------------
  cout<<"--";
  while(col <= size+1){
    temp=1;
    while(temp<=width){
      cout << "-"; 
      temp++;
    }
    col++;
  }
  cout << '\n';
  col = 1;
  //Print the contents
  while(row <= size){ 
    cout << setw(width) << row << " |"; 
    while (col <= size) { 
      cout << setw(width) << row*col; 
      col++; 
    }
    cout << '\n'; 
    col=1;
    row++; 
  }
}  