#include <iostream>
using namespace std;

int main(){
  int list[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  int *p = list; 
  cout << "*p = " << *p << " ,p[0] = " << p[0] << " ,list[0] =" << list[0] << endl;
  cout << "*p is equal to p[0] and list[0]" << endl; 
  p+=3;
  cout << "*p = " << *p << " ,p[0] = " << p[0] << " ,list[0] =" << list[0] << endl;
  cout << "*p is still equal to p[0]" << endl; 
  cout << "but it's not equal to list[0]" << endl; 
}