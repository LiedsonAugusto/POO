#include <iostream>
#include "Pessoa.h"

ostream &operator<<(ostream &out, const Pessoa &p1){

  out << p1.nome;

  return out;
}

Pessoa::Pessoa(string nome) : nome(nome) {}

void Pessoa::setNome(string nome){
  this->nome = nome;
}

string Pessoa::getNome() const { return this->nome;}