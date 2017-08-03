#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Line
{ 
  protected: 
    string str;
  public:
    string text(){ return str;}
    int len(){ return str.size();}
    void println(int indent){
      for (int i=0;i<indent;i++){
        cout<<" ";
      }
      cout << str<<endl;
    }
    void print(int indent){
      for (int i=0;i<indent;i++){
        cout<<" ";
      }
      cout << str;
    }
    Line &append(Line ln){
      str+=ln.text();
      return *this;
    }
};

class StringLine : public Line{
  public:
    StringLine(string s){
      str=s;
    }
};

class SolidLine : public Line{
  public:
    SolidLine(int n, char ch){
      for (int i=0;i<n;i++){
        str+=ch;
      }
    }
};

class Block{
  int indent;
  vector <Line> lines;
  public:
     void addLine(Line ln){
       lines.push_back(ln);
     }
     void print(int indent){
       for (int i=0;i<lines.size();i++){
         for (int j=0; j<indent + this->indent; j++) {
           cout << ' ';
         }
         lines[i].println(0);
       }
     }
     Block(int indent);
};
Block::Block(int indent) : indent(indent) {}

int main(){
  SolidLine a(8,'*');
  SolidLine b(1, '*');
  b.append(SolidLine(6, ' ')).append(SolidLine(1, '*'));
  Block bl(2);
  bl.addLine(a);
  for (int i=0;i<6;i++){
    bl.addLine(b);
  }
  bl.addLine(a);
  bl.print(5);
}