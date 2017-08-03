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
int main(){
  Line a(8,'*');
  Line b(1, '*');
  b.append(Line(6, ' ')).append(Line(1, '*'));
  a.println(0);
  for (int i=0;i<6;i++){
    b.println(0);
  }
  a.println(0);
}