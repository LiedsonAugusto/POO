#include <iostream>
#include "PessoaFisica.h"

PessoaFisica::PessoaFisica(string nome, string cpf) : Pessoa(nome), cpf(cpf) {}

void PessoaFisica::mostrarDados() const {
    std::cout << "Nome: " << getNome() << " | ";
    std::cout << "CPF: " << getCpf() << '\n';
}