#include<iostream>
#include<string>
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
      s+=ln.test();
    }
      
};

int main(){
  Line line("friend");
  line.text();
  line.println();
}

