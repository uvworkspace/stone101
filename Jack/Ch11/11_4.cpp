#include <iostream>
#include <vector>
using namespace std;
int main(){
  const int MAX_INPUT = 7;
  vector<int> input(MAX_INPUT);
  cout << "Please enter "<< MAX_INPUT << " integers:\n";
  for (int &e : input)
    cin >> e;
  for (int e : input)
    cout << e << " ";
}
