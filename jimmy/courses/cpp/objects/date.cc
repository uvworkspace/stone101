#include <iostream>
using namespace std;

class Date {
public:
  Date();
  Date(int mo, int da, int yr);
  Date& operator=(const Date& copy_from);
  int month();
  int day();
  int year();
  string toString();
private:
  int day;
  int month;
  int year;
};

Date::Date() { 
  /* code */ 
}

Date::Date(int mo, int da, int yr) { 
  /* code */ 
}

Date& Date::operator=(const Date& copy_from) {
  this->day = copy_from.day;
  this->month = copy_from.month;
  this->year = copy_from.year;
}

int Date::month() { 
  /* code */ 
  return 0; 
}

int Date::day() { 
  /* code */ 
  return 0;
}

int Date::year() { 
  /* code */ 
  return 0;
}

string Date::toString() { 
  /* code */ 
  return "to string";
}

int main() {
  Date d1;
  cout << d1.toString() << endl;
  Date d2 = d1;
  return 0;
}