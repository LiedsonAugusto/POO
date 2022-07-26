#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using std::ostream;

class Complex 
{

  //funções friend
  friend Complex soma(const Complex &, const Complex &);
  friend Complex sub(const Complex &, const Complex &);
  friend ostream &operator<<(ostream &, const Complex & );

public:
  Complex( int a = 0, int b = 0) : real(a), imaginaria(b) {}

  void print() const;

  const Complex operator+(const Complex &);
  const Complex &operator+=(const Complex &);
  const Complex operator-(const Complex &);
  const Complex &operator-=(const Complex &);
  Complex &operator++(); //pre
  Complex operator++(int); //pos
  Complex &operator--(); //pre
  Complex operator--(int); //pos

private:
  double real;
  double imaginaria;
};

#endif