#ifndef QUADRADO_H
#define QUADRADO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout;
using std::endl;

class Quadrado : public FormaBidimensional {
public:
  Quadrado() : FormaBidimensional(4) {}
  Quadrado(double valorDoLado)
      : FormaBidimensional(4), valorDoLado(valorDoLado) {}

  virtual void desenhar() {
    cout << "-----" << endl;
    cout << "|   |" << endl;
    cout << "-----" << endl;
  }

  virtual double calcularArea() const { return this->valorDoLado * 2; }
  virtual double calcularPerimetro() const { return this->valorDoLado * 4; }

private:
  double valorDoLado;
};

#endif