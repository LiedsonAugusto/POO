#include <iostream>
#include "../../ExtensoesGerais/ExtensoesGerais.h"

PessoaFisica::PessoaFisica(const string &nome, const string &cpf) : Pessoa(nome), cpf(cpf) {}

void PessoaFisica::mostrarDados() const {
    std::cout << "---------- PESSOA FÍSICA ----------\n";
    std::cout << "Nome: " << getNome();
    std::cout << "\nCPF: " << getCpfOuCnpj();
    std::cout << "\n-----------------------------------\n";
}