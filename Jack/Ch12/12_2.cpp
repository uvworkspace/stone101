#include <iostream>
#include <vector>
using namespace std;

bool if_A_less_than_B(int a, int b){
  return a < b;
}
bool if_A_greater_than_B(int a, int b){
  return a > b;
}

void selection_sort(vector<int> &vec, bool (*compare)(int, int)){
  int n = vec.size();
  for(int i = 0; i < n - 1; i++){
    int left = i;
    for(int j = i + 1; j < n; j++)
      if(compare(vec[j], vec[left]))
        left = j; 
    if(i != left)
       swap(vec[i], vec[left]); 
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
  vector<int> vec{ 101,20,0,69,9,-5,8,13,4,11,-101,85,96 };
  cout << "Original: ";
  print(vec);
  cout << '\n';
  selection_sort(vec, if_A_less_than_B);
  cout << "Ascending: ";
  print(vec);
  cout << '\n';
  selection_sort(vec, if_A_greater_than_B);
  cout << "Descending: ";
  print(vec);
}