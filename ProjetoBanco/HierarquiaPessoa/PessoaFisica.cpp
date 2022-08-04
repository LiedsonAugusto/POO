#include <iostream>
#include "PessoaFisica.hpp"

PessoaFisica::PessoaFisica(string nome, string cpf) : Pessoa(nome), cpf(cpf) {}

void PessoaFisica::mostrarDados() const {
    std::cout << "Nome: " << getNome() << " | ";
    std::cout << "CPF: " << getCpf() << '\n';
}