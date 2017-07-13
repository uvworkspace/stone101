#include <iostream>
using namespace std;

int main(){
  double sum = 0;
  double *input; 
  int size;
  cout << "Please enter the number of inputs:\n";
  cin >> size;
  if(size > 0){ 
    cout << "Please enter " << size << " inputs:\n";
    input = new double[size];
    for(int i = 0; i < size; i++){
      cin >> input[i];
      sum += input[i];
    }
   cout << "The average of ";
    for(int i = 0; i < size - 1; i++)
      cout << input[i] << ", ";
    cout << input[size - 1] << " is "<< sum/size;
    delete [] input; 
  }
}