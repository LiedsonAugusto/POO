#include "PessoaFisica.h"
#include <iostream>

PessoaFisica::PessoaFisica(string nome, string endereco, string email,
                           string cpf, string nascimento, string estadoCivil)
    : Contato(nome, endereco, email), cpf(cpf), nascimento(nascimento),
      estadoCivil(estadoCivil) {}

void PessoaFisica::imprimir() const {
  std::cout << getNome() << '\n';
  std::cout << getCpf() << '\n';
  std::cout << getNascimento() << '\n';
  std::cout << getEndereco() << '\n';
  std::cout << getEmail() << '\n';
  std::cout << getEstadoCivil() << '\n';
}