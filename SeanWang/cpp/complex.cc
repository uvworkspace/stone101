#include <iostream>
using namespace std; 

class Complex {
//private:
  double real;
  double imag;
//public:
  //Complex(double reals, double imags): real(reals), imag(imags) {}
  Complex(double reals, double imags){
    this -> real = reals;
    imag = imags;
  }
  void label(){
    cout << real;
    if (imag < 0){
      cout << " - ";
      cout << - imag;
    }
    else{
      cout << " + ";
      cout << imag;
    }
    cout << "i" << endl;
  }
  
  Complex operator +(Complex b){
  //  return Complex(real + b.real, imag + b.imag);
    Complex e(0, 0);
    e.real = real + b.real;
    e.imag = imag + b.imag;
    return e;
  }
  
  Complex sub(Complex b){
    return Complex(real - b.real, imag - b.imag);
  }
  
  Complex times(Complex b){
    return Complex((real * b.real) - (imag * b.imag), (imag * b.real) + (real * b.imag));
  }
};

int main() {
  Complex c(1, 2);
  Complex d(3, -4);

  c.label(); // (1 + 2i)
  
  Complex e = c + d;
  e.label(); // (4 - 2i)
  c.label(); // (1 + 2i)
  d.label(); // (3 - 4i)
  
  Complex f = c.times(d);
  f.label(); // (11 + 2i)

  d = d.times(d);
  d.label(); // (-7 - 24i)
}