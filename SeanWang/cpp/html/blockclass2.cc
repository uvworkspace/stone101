#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

class Line {
  protected:
    string s;
  public:
  virtual string text() {
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
  void append(Line& In) {
    s += In.text();
  } 
  void println(int indent) {
    print(indent);
    cout << endl;
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
    StringLine(string s) {
      this -> s = s;
  }
};

class Block {
  private:
    int indent;
    vector <unique_ptr <Line>> lines;
  public:
    Block(int indent) {
      this -> indent = indent;
    }
    void addLine(unique_ptr <Line> pline) {
      lines.push_back(move(pline));
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
        lines[i] -> println(indent + this -> indent);
      }
    }
};


void starf(int x, int y, int indent) {
  Block block(indent);
  unique_ptr <Line> top1(new SolidLine(x, '*'));
  block.addLine(move(top1));
  for (int i = 2; i < y; i++) {
    unique_ptr <Line> mid(new StringLine("*"));
    SolidLine space(x - 2, ' ');
    StringLine end("*");
    mid -> append(space);
    mid -> append(end);
    block.addLine(move(mid));
  }
  unique_ptr <Line> top2(new SolidLine(x, '*'));
  block.addLine(move(top2));
  block.print(0);
}
/*void starf1(int x, int y) {
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
}*/

void tricake(int x, int indent) {
  Block block(indent);
  for (int i = 0; i < x; i++) {
    unique_ptr <Line> line1(new StringLine("*"));
    SolidLine add(i, '*');
    line1 -> append(add);
    block.addLine(move(line1));
  }
  block.print(0);
}
/*void tricake1(int x) {
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
}*/

int main() {
  starf(10, 5, 0);
  tricake(10, 0);
  return 0;
  
}