#include "Cliente.h"
#include <iostream>

ostream &operator<<(ostream &out, const Cliente &c1) {
  out << "Nome: " << c1.getNome() << std::endl;
  out << "Cpf: " << c1.getCpf() << std::endl;
  out << "Telefone: " << c1.getTelefone() << std::endl;
  out << "Endereço: " << c1.getEndereco() << std::endl;

  return out;
}

Cliente::Cliente(string nome, string cpf, string telefone, string endereco)
    : PessoaFisica(nome, cpf), telefone(telefone), endereco(endereco) {}

void Cliente::setTelefone(string telefone) { this->telefone = telefone; }

void Cliente::setEndereco(string endereco) { this->endereco = endereco; }