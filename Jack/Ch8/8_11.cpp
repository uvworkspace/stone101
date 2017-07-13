#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
  //produce the different sequences every time you execute this process
  srand(static_cast<unsigned>(time(NULL))); 
  for (int i = 0; i < 100; i++){
    cout << rand() << " ";
  }
}