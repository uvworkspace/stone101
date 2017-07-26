#include <iostream>
#include <vector>
using namespace std;

int collectEven(vector<int>& arr, vector<int>& out) {
  int cnt = 0;
  for (int i=0; i<arr.size(); i++) {
    if (arr[i] % 2 == 0) {
      out.push_back(arr[i]);
      cnt++;
    }
  }
  return cnt;
}
int main() {
  vector<int> arr({ 3, 1, 4, 1, 5, 9});
  vector<int> out;
  collectEven(arr, out);
  
  vector<int> arr2({ 2, 3, 4, 5, 6, 7});
  collectEven(arr2, out);
  
  cout << "vec:" << out.size() << ':';
  for (int i=0; i<out.size(); i++) {
    if (i > 0) cout << ',';
    cout << out[i];
    
  }
  cout << endl;
}