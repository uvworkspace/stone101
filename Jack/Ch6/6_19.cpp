#include <iostream>
using namespace std;
int main(){
  int height,row=1,count; 
  cout << "Enter the height of the tree: ";
  cin >> height; 
  while(row <= height){
    count = 1;
    while(count <= height - row){
      cout << " ";
      count++;
    }
    count = 1;
    while (count <= 2*row - 1) {
      cout << "*";
      count++;
    }
    cout << '\n';
    row++;
  }
}