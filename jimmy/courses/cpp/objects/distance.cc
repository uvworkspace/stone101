#include <iostream>
#include <sstream>
using namespace std;

class Distance {
public:
  Distance();
  Distance(int km, int m, int cm);
  void resetDistance(int km, int m, int cm);
  void increment();
  bool equals(Distance &d);
  bool lessThan(Distance &d);
  string toString();
private:
  int km;
  int m;
  int cm;
};

Distance::Distance() { 
  /* implementation not shown */ 
  km = 0;
  m = 0;
  cm = 0;
}

Distance::Distance(int km, int m, int cm) { 
  /* implementation not shown */
  this->km = km;
  this->m = m;
  this->cm = cm;
}

void Distance::resetDistance(int km, int m, int cm) { 
  /* implementation not shown */ 
  this->km = km;
  this->m = m;
  this->cm = cm;
}

void Distance::increment() { 
  /* implementation not shown */ 
}

bool Distance::equals(Distance &d) { 
  /* implementation not shown */ 
  return false;
}

bool Distance::lessThan(Distance &d) { 
  /* implementation not shown */ 
  return false;
}

string Distance::toString() { 
  /* implementation not shown */
  std::ostringstream s;
  s << "km:" << this->km << " m:" << this->m << " cm:" << this->cm;
  //std::string query(s.str());
  //return query;
  return s.str();
}

void display(Distance &d) {
  cout << d.toString() << endl;
}

int main() {
  Distance d(3, 4, 5);
  display(d);
  return 0;
}