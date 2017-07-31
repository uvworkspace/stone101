#include <iostream>
#include <string>
using namespace std;

class Complex {   //a-->real   b-->imaginary
public:
  Complex(double a, double b) : a(a), b(b) {}
  Complex operator+(Complex x) {
    return Complex(a+x.a,b+x.b);
  }
  
  Complex sub(Complex x){
    return Complex(a-x.a,b-x.b);
  }
  Complex times(Complex x){
    return Complex(a*x.a-b*x.b,b*x.a+a*x.b);
  }
  Complex operator*(Complex x) {
    return Complex(a*x.a-b*x.b,b*x.a+a*x.b);
  }
  ~Complex() {
    cout << "cleared" << endl;
  }
  void label(){
    if (b>0){
      cout <<"("<<a<<"+"<<b<<"i)"<<endl;
    }
    else{
      cout <<"("<<a<<"-"<<-b<<"i)"<<endl;
    }
  }
private:
  int a;
  int b;
};
int main() {
  Book *x = new Book(10, 20);
  Card *c = new Card("hello");
  Item items[] = { x, c };
  for (int i=0; i<2; i++) {
    items[i]->prDetails();
  }
  
  
  return 0;
  Complex c(1, 2);
  Complex d(3, -4);

  c.label(); // (1 + 2i)
  
  Complex e = c + d;
  e.label(); // (4 - 2i)
  c.label(); // (1 + 2i)
  d.label(); // (3 - 4i)
  
  Complex f = c * d;
  f.label(); // (11 + 2i)
  
  d = d.times(d);
  d.label(); // what should this be?
  
  
}