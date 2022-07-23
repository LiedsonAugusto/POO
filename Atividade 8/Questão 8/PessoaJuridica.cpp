#include <iostream>
#include "PessoaJuridica.h"

PessoaJuridica::PessoaJuridica(string nome, string cnpj, string razaoSocial, string nomeFantasia) : Pessoa(nome), cnpj(cnpj), razaoSocial(razaoSocial), nomeFantasia(nomeFantasia) {}

void PessoaJuridica::setCnpj(string cnpj) {
  this->cnpj = cnpj;
}

void PessoaJuridica::setRazaoSocial(string razaoSocial) {
  this->razaoSocial = razaoSocial;
}

void PessoaJuridica::setNomeFantasia(string nomeFantasia) {
  this->nomeFantasia = nomeFantasia;
}

string PessoaJuridica::getCnpj() const {
  return this->cnpj;
}

string PessoaJuridica::getRazaoSocial() const {
  return this->razaoSocial;
}

string PessoaJuridica::getNomeFantasia() const {
  return this->nomeFantasia;
}