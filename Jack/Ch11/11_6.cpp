#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> vec){
  for(int e : vec)
    cout << e << " ";
  cout << '\n';
}

int sum(vector<int> vec){
  int sum = 0;
  for (int e : vec)
    sum += e;
  return sum;
}

int main(){ 
  vector<int> vec{ 1, 3, 5, 7, 11, 13};
  print(vec);
  cout << sum(vec) << '\n';
  for (int i = 0; i < vec.size(); i++)
    vec[i] = 0;
  print(vec);
  cout << sum(vec) << '\n';
}