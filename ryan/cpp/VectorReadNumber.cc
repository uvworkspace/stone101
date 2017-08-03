#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec1{1,2,3,4,5,6,7,8};
  cout << "Numbers: ";
  for (int i = 0; i < vec1.size(); i++) {
    cout << vec1[i] << " ";
  }
  cout << endl;
  
  int sum = 0;
  cout << "Sum: ";
  for (int i = 0; i <vec1.size(); i++) {
    sum += vec1[i];
  }
  cout << sum << endl;
}
