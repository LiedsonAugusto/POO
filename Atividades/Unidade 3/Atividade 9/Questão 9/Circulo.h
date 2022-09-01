#ifndef CIRCULO_H
#define CIRCULO_H
#include <math.h>

#include "FormaBidimensional.h"

#include <iostream>
using std::cout;
using std::endl;

class Circulo : public FormaBidimensional {
public:
  Circulo() : FormaBidimensional(99999) {}
  Circulo(double raio) : FormaBidimensional(99999), raio(raio) {}

  virtual void desenhar() {
    cout << "  _ " << endl;
    cout << "/   \\" << endl;
    cout << "\\   /" << endl;
    cout << "  ~ " << endl;
  }

  virtual double calcularArea() const { return 3.14 * pow(this->raio, 2); }

  virtual double calcularPerimetro() const { return 2 * 3.14 * this->raio; }

private:
  double raio;
};

#endif