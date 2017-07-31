#include <iostream>
#include <string.h>
using namespace std;

void pr(char s[]) {
  cout << sizeof(s) << endl;
  cout << s << endl;
}
int main() {
  int a = 10;
  
  int *b = &a;
  b++;
  *b += 1;
  cout << b << ": " << *b << "," << a << endl;
  return 0;
  
  char s[] = "hello world";
  pr(s);

  for (int i=0; i<sizeof(s); i++) {
    cout << i << ": " << s[i] << "," << *(s+i) << endl;
  }
  return 0;
  for (char *t = s; *(t) != 0; t++) {
    //cout << *t << endl;
    (*t) ++;
  }
  cout << s << endl;
}