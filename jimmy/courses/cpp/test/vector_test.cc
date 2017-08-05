#include <iostream>
#include <vector>
using namespace std;

void prVector(vector<int> &vec) {
  for (int i=0; i<vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;
}

int main() {
  // empty vector
  vector<int> vec1;

  // vector holds 5 integers of default value 0
  vector<int> vec2(5);

  // vector holds 7 integers of default value 3
  vector<int> vec3(7, 3); 

  // specify values separately
  vector<int> vec4{1, 2, 3, 4, 5};
  prVector(vec4);
  
  vec4.push_back(99);
  prVector(vec4);
  
  vec4.insert(vec4.begin()+1, 50);
  prVector(vec4);
  
  vec4.erase(vec4.begin());
  prVector(vec4);
}