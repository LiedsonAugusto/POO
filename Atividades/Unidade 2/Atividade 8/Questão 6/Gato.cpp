#include <iostream>
#include "Gato.h"

Gato::Gato() : Animal(){}

Gato::Gato(string nome) : Animal(nome){}

string Gato:: miar() const {
  string miar = "Miau";
  return miar;
}