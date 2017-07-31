#include<iostream>
using namespace std;

class Complex{
  public:
    Complex(double a,double b);
    Complex operator+(Complex c);
    Complex operator-(Complex c);
    Complex operator*(Complex c);
    void label();
  private:
    double _a;
    double _b;
};
Complex::Complex(double a ,double b):_a(a),_b(b){}

Complex Complex::operator+(Complex C){
  double c = C._a;
  double d = C._b;
  return Complex(_a+c,_b+d);
}
Complex Complex::operator-(Complex C){
  double c = C._a;
  double d = C._b;
  return Complex(_a-c,_b-d);
}
Complex Complex::operator*(Complex C){
  double c = C._a;
  double d = C._b;
  return Complex(_a*c-_b*d,_a*d+_b*c);
  
}
void Complex::label(){
  cout<<"("<<_a<<"+"<<_b<<"i)"<<endl;
}

int main() {
  Complex c(1, 2);
  Complex d(3, -4);

  c.label(); // (1 + 2i)
  
  Complex e = c+d;
  e.label(); // (4 - 2i)
  c.label(); // (1 + 2i)
  d.label(); // (3 - 4i)
  
  Complex f = c*d;
  f.label(); // (11 + 2i)

  d = d*d;
  d.label(); // what should this be? How do I know?
}