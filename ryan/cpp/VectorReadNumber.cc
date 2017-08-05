#include <iostream>
#include <vector>
using namespace std;

void ReadNum() {
  int val;
  vector<int> vect;
  while (cin >> val) {
    vect.push_back(val);
  }
  
}

int main() {
  vector<int> vec1;
  //vector<int> vec1{1,2,3,4,5,6,7,8};
  
  // read and push numbers into the vec1
  int val;
  while(cin >> val) {
    if (val != 999)
      vec1.push_back(val);
    else
      break;
  }
  
  cout << "Numbers: ";
  for (int i = 0; i < vec1.size(); i++) {
    cout << vec1[i] << " ";
  }
  
  int sum = 0;
  cout << "Sum: ";
  for (int i = 0; i <vec1.size(); i++) {
    sum += vec1[i];
  }
  cout << sum << endl;
}
