#include <iostream>
#include <string>
using namespace std;

class Pet{
public:
  Pet(string name, int age);
  void pat();
private:
  string name;
  int age;
};

/*Pet::Pet(string name, int age): name(name), age(age) {}

void Pet::pat(){
  cout << "My name is " << name << endl;
  cout << "I am " << age << " years old." << endl;
}

int main(){
  Pet dog("Alex", 10);
  dog.pat();
}*/