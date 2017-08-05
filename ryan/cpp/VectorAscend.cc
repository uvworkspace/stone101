#include <iostream>
#include <vector>
using namespace std;

vector<int> ascending (int size) {
  vector<int> vec1;
  for (int i = 0; i < size; i++) {
    vec1.push_back(i);
  }
  return vec1;
}

int main() {
  vector<int> vec = ascending(5);
  
  for (int v : vec) {
    cout << v << " ";
  }
}