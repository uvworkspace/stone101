#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Line
{   
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
    Line(int n, char ch);
    Line(string s);
};
Line::Line(int n, char ch){
  for (int i=0;i<n;i++){
      str+=ch;
    }
}
Line::Line(string s){
  str=s;
}
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
  Line a(8,'*');
  Line b(1, '*');
  b.append(Line(6, ' ')).append(Line(1, '*'));
  Block bl(2);
  bl.addLine(a);
  for (int i=0;i<6;i++){
    bl.addLine(b);
  }
  bl.addLine(a);
  bl.print(5);
}