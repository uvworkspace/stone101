#include <iostream>
using namespace std;

class Wallet {
public:
  string name;
  static int numWallet;
  static const double RATE;
  Wallet();
  Wallet(string name, double balance);
  
  Wallet(const Wallet& copy_from); //copy constructor
  Wallet& operator=(const Wallet& copy_from); //copy assignment
  ~Wallet();                  // destructor
  
  double getBalance();
  int getAccesses();
  void deposit(double amount);
  void deposit(int pts);
  void withdraw(double amount);
  void withdraw(int pts);
  void transfer(Wallet target, double amount);

  // static method
  static double dollarToPoints(double amount);

private:
  string state;
  int accesses;
  double balance;
  
  void incAccesses();
};

int Wallet::numWallet = 0;
const double Wallet::RATE = 10.0;

Wallet::Wallet() {
  this->name = "unknown";
  this->balance = 0;
  this->accesses = 0;
  numWallet++;
}

Wallet::Wallet(string name, double balance) {
  this->name = name;
  this->balance = balance;
  this->accesses = 0;
  numWallet++;
}

//copy constructor for making a new copy
Wallet::Wallet(const Wallet& copy_from) {
  this->name = copy_from.name;
  this->balance = copy_from.balance;
  this->accesses = 0;
  numWallet++;
}

//copy assignment for assigning a value from one to another
Wallet& Wallet::operator=(const Wallet& copy_from) {
  this->name = copy_from.name;
  this->balance = copy_from.balance;
  this->accesses = 0;
  numWallet++;
}

// destructor, just an example
Wallet::~Wallet() {  
  //delete[] blabla;
}

// accessor
double Wallet::getBalance() {
  return balance;
}

int Wallet::getAccesses() {
  return accesses;
}

//mutators
void Wallet::deposit(double amount) { 
  balance += amount;
  incAccesses();
}

void Wallet::deposit(int pts) { 
  balance += pts / RATE;
  incAccesses();
}

void Wallet::withdraw(double amount) {
  /* implementation code */ 
  balance -= amount;
  incAccesses();
}

void Wallet::withdraw(int pts) { 
  balance -= pts / RATE;
  incAccesses();
}

void Wallet::transfer(Wallet target, double amount) {
  withdraw(amount);
  target.deposit(amount);
}

void Wallet::incAccesses() {
  accesses++;
}

// static method
double Wallet::dollarToPoints(double amount) {
  return amount;
}

// public, private and static variables
void test1() {
  Wallet w1;
  cout << w1.name << endl;
  //cout << w1.state << endl; // compile-time error
    
  Wallet w2;
  cout << Wallet::numWallet << endl;  // output 2
  cout << Wallet::RATE << endl;  // output 30
}

// public, private and static functions
void test2() {
  Wallet w;    
  w.deposit(1000.0);
  w.withdraw(500.0);
  //w.incAccesses(); // compile-time error
  cout << w.getAccesses() << endl;

  double points = Wallet::dollarToPoints(100);
  cout << points << endl;
}

// constructor
void test3() {
  Wallet w1;
  Wallet w2("Jimmy", 1000);
  cout << w1.getBalance() << endl;
  cout << w2.getBalance() << endl;
}

// overloading
void test4() {
  Wallet w1;
  Wallet w2("Jimmy", 1000);
  w1.deposit(100.0);
  cout << w1.getBalance() << endl;
  w2.withdraw(1000.0);
  cout << w2.getBalance() << endl;
  
  Wallet w3;
  Wallet w4("Jack", 1000);
  w3.deposit(100);
  cout << w3.getBalance() << endl;
  w4.withdraw(1000);
  cout << w4.getBalance() << endl;
}

// reference
void test5() {
  int a = 100;
  double b = a;
  b = 200;
  cout << a << endl;
  cout << b << endl;

  Wallet w1("Jimmy", 1000);
  Wallet *w2 = &w1;
  Wallet &w3 = w1;
  w2->deposit(1000.0);
  w3.deposit(1000.0);
  cout << w1.getBalance() << endl;
  cout << w2->getBalance() << endl;
  cout << w3.getBalance() << endl;    
}

void increase1(int a) {
  a = 100;
}
void increase2(Wallet *w) {
  w->deposit(100.0);
}
void increase3(Wallet &w) {
  w.deposit(100.0);
}

void test6() {
  int a = 100;
  increase1(a);
  cout << a << endl;

  Wallet w("Jimmy", 1000);
  increase2(&w);
  cout << w.getBalance() << endl;
  increase3(w);
  cout << w.getBalance() << endl;
}

int main() {
  Wallet w1;
  Wallet w2("Jimmy", 1000);
  w1.deposit(100.0);
  cout << w1.getBalance() << endl;
  w2.withdraw(1000.0);
  cout << w2.getBalance() << endl;
  
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  
  return 0;
}