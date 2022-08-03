#include <iostream>
#include "PessoaJuridica.hpp"

PessoaJuridica::PessoaJuridica(string nome, string cnpj) : Pessoa(nome), cnpj(cnpj) {}

void PessoaJuridica::mostrarDados() const {
    std::cout << "Nome: " << getNome() << " | ";
    std::cout << "CNPJ: " << getCnpj() << '\n';
}