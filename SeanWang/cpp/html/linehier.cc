#include <iostream>
#include <string>
using namespace std;

class Line {
  private:
    string s;
  public:
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

class SolidLine : public Line {
  public:
    string s;
    SolidLine(int n, char ch) {
      string str = "";
      for (int i = 1; i <= n; i++) {
        str += ch;
      }
      s = str;
    }
};

class StringLine : public Line {
  public:
    string s;
    StringLine(string s) {
      this -> s = s;
  }
};



int main() {
  return 0;
}