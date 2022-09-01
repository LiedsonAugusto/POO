#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout;
using std::endl;

class Triangulo : public FormaBidimensional {
public:
  Triangulo() : FormaBidimensional(3) {}
  Triangulo(double base, double lado2, double lado3, double altura)
      : FormaBidimensional(3), base(base), lado2(lado2), lado3(lado3),
        altura(altura) {}

  virtual void desenhar() {
    cout << "  .   " << endl;
    cout << " / \\ " << endl;
    cout << "/   \\" << endl;
    cout << "~~~~~ " << endl;
  }

  virtual double calcularArea() const {
    return (this->base * this->altura) / 2;
  }

  virtual double calcularPerimetro() const {
    return this->base + this->lado2 + this->lado3;
  }

private:
  double base;
  double lado2;
  double lado3;
  double altura;
};
#endif
