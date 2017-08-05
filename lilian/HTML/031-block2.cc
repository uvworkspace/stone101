#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

class Line
{ 
  protected: 
    string str;
  public:
    virtual string text(){ return str;}
    virtual int len(){ return str.size();}
    virtual void println(int indent){
      for (int i=0;i<indent;i++){
        cout<<" ";
      }
      cout << str<<endl;
    }
    virtual void print(int indent){
      for (int i=0;i<indent;i++){
        cout<<" ";
      }
      cout << str;
    }
    virtual Line &append(Line &ln){
      str+=ln.text();
      return *this;
    }
    virtual ~Line() { cout << "deleted Line \n"; }
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
  vector<unique_ptr<Line>> lines;
  public:
     void addLine(unique_ptr<Line> line){
       lines.push_back(move(line));
     }
     void print(int indent){
       for (int i=0;i<lines.size();i++){
         for (int j=0; j<indent + this->indent; j++) {
           cout << ' ';
         }
         lines[i]->println(0);
       }
     }
     Block(int indent);
};
Block::Block(int indent) : indent(indent) {}

int main(){
  Block bl(2);
  auto a = unique_ptr<Line>(new SolidLine(8, '*'));
  bl.addLine(move(a));
 
  SolidLine sl(1, '*');
  SolidLine wl(6, ' ');
  for (int i=0;i<6;i++){
    unique_ptr<Line> b(new SolidLine(1, '*'));
    b->append(wl);
    b->append(sl);          //since append pass by reference, need an arg to store it first
    bl.addLine(move(b));
  }
  auto a2 = unique_ptr<Line>(new SolidLine(8, '*'));
  bl.addLine(move(a2));
  bl.print(5);
  
}