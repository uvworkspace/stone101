#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Line{
  private:
    string s;
  public:
    Line(string s){
      this->s=s;
    }
    Line(int n, char ch){
     s="";
     for (int i=0;i<n;i++){
       s+=ch;
     }
    }
    string text(){
      string str="";
      for(int i=0;i<s.length() && s[i]!='\n';i++){
        str+=s[i];
      }
      return str;
    }
    int len(){
      return s.length();
    }
    void println(){
      cout<<s<<endl;
    }
    void append(Line ln){
      s+=ln.text();
    }
      
};

class Block{
  private:
    int indent;
    vector<Line> lines;
  public:
    Block(int indent){
      this->indent=indent;
    }
  void addLine(Line ln){
    lines.push_back(ln);
  }
  void print(int indent){
    for (Line &line : lines) {
      space(indent + this->indent);
      line.println();
    }
  }
  void space(int n){
    for(int i=0;i<n;i++){
      cout<<" ";
    }
  }
};

int main(){
  Line line1(10,'*');
  Line line2(1,'*');
  Line line3(8,' ');
  Line line4 = line2;
  line2.append(line3);
  line2.append(line4);
  Block block(4);
  block.addLine(line1);
  for (int i =0;i<6;i++){
    block.addLine(line2);
  }
  
  block.addLine(line1);
  block.print(4);
}