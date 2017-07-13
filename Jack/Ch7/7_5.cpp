#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int size,row,col,width=1,temp; // variable initiallize
  cout << "Please enter the table size: ";
  cin >> size;
  temp=size*size;
  //get the appropriate width
  for(temp;temp>0;temp/=10)
    width++;
  // Print the title space
  cout<<"  ";
  for(temp=1;temp<=width;temp++)
    cout << " ";
  // Print col head
  for(col=1;col<=size;col++)
    cout << setw(width) << col; 
  cout << '\n';
  // Print the line ------------------
  cout<<"--";
  for(col=1;col<=size+1;col++)
    for(temp=1;temp<=width;temp++)
      cout << "-";
  cout << '\n';
  //Print the contents
  for(row=1;row<=size;row++){
    cout << setw(width) << row << " |";
    for(col=1;col<=size;col++)
      cout << setw(width) << row*col; 
    cout << '\n';
  }
}