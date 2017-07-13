#include <iostream>
using namespace std;

int main(){
  double sum = 0,*input,n; 
  const int MAX = 5;
  int size = 0, 
  limit = MAX; 
  input = new double[limit];
  cout << "Please enter any nonnegative values: (negative value will show the result)\n";
  cin >> n;
  while(n >= 0){ 
    if(size >= limit){
      limit += MAX; 
      double *temp = new double[limit]; 
      for(int i = 0; i < size; i++)
        temp[i] = input[i]; 
      delete [] input;
      input = temp; 
      cout << "Expand the size of input list by " << MAX << "\n";
    }
    input[size] = n; 
    size++;
    sum += n; 
    cin >> n; 
  }
  if(size > 0){ 
    cout << "The average of ";
    for (int i = 0; i < size - 1; i++)
      cout << input[i] << ", ";
    cout << input[size - 1] << " is " << sum/size << "\n";
  }else
    cout << "there is no any input\n";
  delete [] input; 
}