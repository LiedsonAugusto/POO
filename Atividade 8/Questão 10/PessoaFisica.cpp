#include <iostream>
#include "PessoaFisica.h"

PessoaFisica::PessoaFisica(string nome, string cpf) : Pessoa(nome), cpf(cpf) {}

void PessoaFisica::setCpf(string cpf) {
  this->cpf = cpf;
}

string PessoaFisica::getCpf() const {
  return this->cpf;
}