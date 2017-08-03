#include <iostream>
#include <string>
using namespace std;

class Line {
  private:
    string s;
  public:
  Line(int n, char ch) {
    string str = "";
    for (int i = 1; i <= n; i++) {
      str += ch;
    }
    s = str;
  }
  Line(string s) {
    this -> s = s;
  }
  string text() {
    int pos = s.find('\n');
    if (pos == string::npos) {
      return s;
    }
    else {
      return s.substr(0, pos);
    }
  }
  int len() {
    return s.length();
  }
  void appen(Line In) {
    s += In.s;
  } 
  void println(int indent) {
    for (int i = 1; i <= indent; i++) {
      cout << " ";
    }
    cout << s << endl;
  }
  void print(int indent) {
    for (int i = 1; i <= indent; i++) {
      cout << " ";
    }
    cout << s;
  }
};

void starf(int x, int y) {
  Line top(x, '*');
  Line mid("*");
  top.println(0);
  for (int i = 2; i < y; i++) {
    mid.print(0);
    mid.println(x - 2);
  }
  top.println(0);
}

void tricake(int x) {
  Line line1("*");
  Line line2("*");
  for (int i = 0; i < x; i++) {
    line1.println(0);
    line1.appen(line2);
  }
}

int main() {
  starf(5, 10);
  tricake(10);
  return 0;
}