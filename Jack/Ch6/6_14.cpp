#include <iostream>
using namespace std;
int main(){
  int n1=2,n2=2;
  while (n1 < 100) {
    while (n2 < 100){
      cout << "Product is " << (n1 * n2) << '\n';
      if (n1 * n2 == 551)
        goto end;
      n2++;
    }
    n2 = 2;
    n1++;
  }
  end:
  cout << "The end" << '\n';
}
