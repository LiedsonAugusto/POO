#include "PessoaJuridica.h"
#include <iostream>

PessoaJuridica::PessoaJuridica(string nome, string endereco, string email,
                               string cnpj, string inscricaoEstadual,
                               string razaoSocial)
    : Contato(nome, endereco, email), cnpj(cnpj),
      inscricaoEstadual(inscricaoEstadual), razaoSocial(razaoSocial) {}

void PessoaJuridica::imprimir() const{
  std::cout << getNome() << '\n';
  std::cout << getCnpj() << '\n';
  std::cout << getInscricaoEstadual() << '\n';
  std::cout << getEndereco() << '\n';
  std::cout << getEmail() << '\n';
  std::cout << getRazaoSocial() << '\n';
}