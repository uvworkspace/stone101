#include <iostream>
using namespace std;
void show_tree(int height){
  for(int i=1;i<=height;i++){
    for(int j=height-i;j>0;j--)
      cout << " ";
    for(int j=1;j<=i*2-1;j++)
      cout << "*";
    cout << endl; // it means " cout << '\n'; "
  }
}
int main(){
  int height;
  cout << "Enter the height of the tree:\n";
  cin >> height; 
  show_tree(height);
}
