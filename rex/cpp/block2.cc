#include<iostream>
#include<string>
#include<vector>
#include<memory>
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
    void append(unique_ptr<Line> ln){
      s+=ln->text();
    }
    ~Line(){
      cout<<"deleted"<<endl;
    }
      
};

class Block{
  private:
    int indent;
    vector<unique_ptr<Line>> lines;
  public:
    Block(int indent){
      this->indent=indent;
    }
  void addLine(unique_ptr<Line> ln){
    lines.push_back(move(ln));
  }
  void print(int indent){
    for (unique_ptr<Line> &line : lines) {
      space(indent + this->indent);
      line->println();
    }
  }
  void space(int n){
    for(int i=0;i<n;i++){
      cout<<" ";
    }
  }
};

int main(){
  unique_ptr<Line> line1(new Line(10,'*'));
  /*unique_ptr<Line> line2(new Line(1,'*'));
  unique_ptr<Line> line3(new Line(8,' '));
  unique_ptr<Line> line4(new Line(1,'*'));
  line2->append(line3);
  line2->append(line4);*/
  Block block(4);
  /*block.addLine(move(line1));
  for (int i =0;i<6;i++){
    block.addLine(move(line2));
  }
  
  block.addLine((line1));*/
  block.print(4);
}