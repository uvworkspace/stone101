#include <iostream>
#include <iomanip>
using namespace std;
void print_header(int size){
  int temp = size*size,width=1,col;
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
}

void print_contents(int size){
  int temp = size*size,row,col,width=1;
  //get the appropriate width
  for(temp;temp>0;temp/=10)
    width++;
  for(row=1;row<=size;row++){
    cout << setw(width) << row << " |";
    for(col=1;col<=size;col++)
      cout << setw(width) << row*col; 
    cout << '\n';
  }
}
void timestable(int size){
  print_header(size);
  print_contents(size);
}

int get_value_in_range(int first, int last){
  //Swap
  if(first > last){
    int temp = first;
    first = last;
    last = temp;
  }
  cout << "Please enter a value in the range " << first << "..." << last << ": ";
  int input; 
  bool is_invalid;
  do{
    cin >> input;
    is_invalid = (input < first || input > last);
    if(is_invalid){
      cout << input << " is not in the range "
      << first << "..." << last << '\n';
      cout << "Please try again: ";
    }
  }while (is_invalid);
  return input;
}

int main(){
  int size = get_value_in_range(1, 30);
  timestable(size);
}