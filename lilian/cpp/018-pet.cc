#include <iostream>
#include <string>
#include "pet.h"
using namespace std;

/*class Pet {
public:
  Pet(string name, int age) : name(name), age(age) {}
  void pat() {
    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old" << endl;
  }
private:
  string name;
  int age;
};

class Pet2 {
public:
  Pet2(string name, int age) {
    this->name = name;
    this->age = age;
  }
  void pat() {
    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old" << endl;
  }
private:
  string name;
  int age;
};

class Pet3 {
public:
  Pet3(string name, int age);
  void pat();
private:
  string name;
  int age;
};

Pet3::Pet3(string name, int age): name(name), age(age) {}

void Pet3::pat() {
  cout << "My name is " << name << endl;
  cout << "I am " << age << " years old" << endl;
}*/

int main(){
  Pet3 pet3("kitty",3);
  pet3.pat();
  Pet2 pet2("odie",4);
  pet2.pat();
  Pet pet("happy",2);
  pet.pat();
}