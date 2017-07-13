#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int row_size=-1,col_size=-1,row=1,col=1; // variable initiallize
  while(row_size<=0 || col_size<=0){
    //get the row size and column size
    cout << "Please enter the table row_size: ";
    cin >> row_size;
    cout << "Please enter the table col_size: ";
    cin >> col_size;
  }
  // Print the table
  while(row <= row_size){ 
    cout << "#" << left << setw(2) << row << ": ";
    while(col <= col_size){
      cout << "☐";
      col++;
    }
    cout << '\n';
    col=1;
    row++; 
  }
}