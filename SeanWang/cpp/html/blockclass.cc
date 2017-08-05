#include <iostream>
#include <string>
#include <vector>
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
  void append(Line In) {
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

class Block {
  private:
    int indent;
    vector <Line> lines;
  public:
    Block(int indent) {
      this -> indent = indent;
    }
    void addLine(Line& In) {
      lines.push_back(In);
    }
    /*void addString(string s) {
      int pos1 = s.find('\n');
      int pos2 = s.find()
      while (pos != string::npos) {
        s.substring()
      }
      
    }*/
    void print(int indent) {
      for(int i = 0; i < lines.size(); i++) {
        lines[i].println(indent + this -> indent);
      }
    }
};


void starf1(int x, int y) {
  Line top(x, '*');
  Line mid("*");
  top.println(0);
  for (int i = 2; i < y; i++) {
    mid.print(0);
    mid.println(x - 2);
  }
  top.println(0);
}

void starf2(int x, int y, int indent) {
  Block block(indent);
  Line top(x, '*');
  Line mid("*");
  Line space(x - 2, ' ');
  mid.append(space);
  mid.append(mid);
  block.addLine(top);
  for (int i = 2; i < y; i++) {
    block.addLine(mid);
  }
  block.addLine(top);
  block.print(2);
}

void tricake1(int x) {
  Line line1("*");
  Line line2("*");
  for (int i = 0; i < x; i++) {
    line1.println(0);
    line1.append(line2);
  }
}

void tricake2(int x, int indent) {
  Block block(indent);
  Line line1("*");
  Line line2("*");
  for (int i = 0; i < x; i++) {
    block.addLine(line1);
    line1.append(line2);
  }
  block.print(3);
}

int main() {
  starf2(5, 10, 2);
  tricake2(10, 1);
  return 0;
}