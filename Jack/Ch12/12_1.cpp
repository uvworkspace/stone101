#include <iostream>
#include <vector>
using namespace std;

void swap(int& a, int& b){
  int temp = a;
  a = b;
  b = temp;
}

void selection_sort(vector<int> &vec){
  int n = vec.size();
  for(int i = 0; i < n - 1; i++){
    int small = i;
    for(int j = i + 1; j < n; j++)
      if(vec[j] < vec[small])
        small = j;
    if(i != small)
      swap(vec[i], vec[small]);
  }
}

void print(const vector<int>& vec){
  int n = vec.size();
  cout << '{';
  if(n > 0){
    cout << vec[0];
    for(int i = 1; i < n; i++)
      cout << ',' << vec[i]; 
  }
  cout << '}';
}

int main(){
  vector<int> vec{101,20,0,69,9,-5,8,13,4,11,-101,85,96};
  cout << "Before: ";
  print(vec);
  cout << endl;
  selection_sort(vec);
  cout << "After: ";
  print(vec);
}