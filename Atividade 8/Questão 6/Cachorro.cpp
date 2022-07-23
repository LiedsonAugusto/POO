#include <iostream>
#include "Cachorro.h"

Cachorro::Cachorro() : Animal(){}

Cachorro::Cachorro(string nome) : Animal(nome){}

string Cachorro::latir() const {
  string latir = "Auau";
  return latir;
}