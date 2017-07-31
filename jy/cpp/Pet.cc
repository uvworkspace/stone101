#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

Pet::Pet(string name, int age) : name(name), age(age) {}

void Pet::pat() {
    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old" << endl;
}
