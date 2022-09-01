#ifndef FORMABI_H
#define FORMABI_H

// classe abstrata

class FormaBidimensional {
public:
  FormaBidimensional(int numLados) : numLados(numLados) {}

  // método virtual puro
  virtual void desenhar() = 0;

  virtual double calcularArea() const = 0;

  virtual double calcularPerimetro() const = 0;

private:
  int numLados;
};

#endif