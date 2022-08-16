#include <iostream>
#include "PessoaFisica.h"

PessoaFisica::PessoaFisica(const string &nome, const string &cpf) : Pessoa(nome), cpf(cpf) {}

void PessoaFisica::mostrarDados() const {
    std::cout << "Nome: " << getNome() << " | ";
    std::cout << "CPF: " << getCpf() << '\n';
}