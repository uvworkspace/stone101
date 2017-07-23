#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;

void pr(const char str[], int n) {
  int len = strlen(str);
  cout << "pr: " << str << " len: " << len << endl;
}

void pr(int ints[], int len) {
  for (int i=0; i<len; i++) {
    cout << "pr: " << i << ": " << ints[i] << endl;
  }
}

void pr2(int *ints, int len) {
  for (int i=0; i<len; i++) {
    cout << "pr: " << i << ": " << *(ints+i) << endl;
  }
}
void pr3(int *start, int *end) {
  for (int *s = start; s != end; s++) {
    cout << *s << ";";
  }
  cout << endl;
}

int main() {
  int s[] = { 3, 2, 1, 2, 3 };
  int *t = s;
  pr(s, 5);
  //t[1] = 8;
  pr2(t, 5);
  pr3(t, t+5);
  sort(t, t+5);
  pr3(t, t+5);
}
int main0 ()
{
  char s[] = "hello";
  const char *t = "world";
  cout << s << endl;
  cout << t << endl;
  
  for (int i=0; i<6; i++) {
    int y = s[i];
    cout << s[i] << ": " << y << endl;
    cout << *(t+i) << "=" << t[i]<< ": " << (int) *(t+i) << endl;
    cout << t+i << endl;
  }
  
  for (char *p = s; *p != 0; p = p + 1) {
    cout << "P" << *p << endl;
  }

  pr(t, 0);
}
