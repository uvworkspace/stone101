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

int main(){
  SolidLine a(8,'*');
  SolidLine b(1, '*');
  b.append(SolidLine(6, ' ')).append(SolidLine(1, '*'));
  a.println(0);
  for (int i=0;i<6;i++){
    b.println(0);
  }
  a.println(0);
}