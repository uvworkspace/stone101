#include<iostream>
//#include<string>
using namespace std;

class Pet{
  public:
    Pet(string name,int age);
    void pat();
  private:
    int _age;
    string _name;
};
/*Pet::Pet(string name,int age): _age(age),_name(name){}

void Pet::pat(){
  cout<<"My name is "<<_name<<"."<<endl;
  cout<<"I'm "<<_age<<" years old."<<endl;
}

int main(){
  Pet Sean("Sean",17);
  Sean.pat();
}*/