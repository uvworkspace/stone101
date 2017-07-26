#include <iostream>
#include <vector>
using namespace std;

int sumVec(vector<int>& arr) {          //pass by reference (if arr large)
  int sum = 0;
  for (int i=0; i<arr.size(); i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  vector<int> vec;
  for (int i=0; i<10; i++) {
    vec.push_back(i+1);
  }
  cout << sumVec(vec) << endl;

  int pi[] = { 3, 1, 4, 1, 5, 9 };
  vector<int> vec2(pi, end(pi));    //vec2(start,end+1)
  cout << sumVec(vec2) << endl;
}