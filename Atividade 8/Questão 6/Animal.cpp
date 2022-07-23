#include <iostream>
#include "Animal.h"

using std::cout;
using std::endl;

Animal::Animal(){
  this->nome = "Sem nome";
  this->raca = "Sem raca";
}

Animal::Animal(string nome){
  this->nome = nome;
}

string Animal::caminha() const {
  string retorno = this->nome + " foi para sua caminha\n";
  return retorno;
}