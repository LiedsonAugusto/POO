#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include <iostream>
int main() {
  Circulo ca(3.5);
  Triangulo ta(10, 11, 12, 12);
  Quadrado qa(5);
  std::cout << ca.calcularArea() << '\n';
  std::cout << ca.calcularPerimetro() << '\n';
  std::cout << ta.calcularArea() << '\n';
  std::cout << ta.calcularPerimetro() << '\n';
  std::cout << qa.calcularArea() << '\n';
  std::cout << qa.calcularPerimetro() << '\n';

}