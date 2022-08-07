#include <iostream>
#include "PessoaJuridica.h"

PessoaJuridica::PessoaJuridica(string nome, string cnpj, string razaoSocial, string nomeFantasia) : Pessoa(nome), 
cnpj(cnpj), razaoSocial(razaoSocial), nomeFantasia(nomeFantasia) {}

void PessoaJuridica::mostrarDados() const {
    std::cout << "Nome: " << getNome() << " | ";
    std::cout << "CNPJ: " << getCnpj() << ' | ';
    std::cout << "Razao Social: " << getRazaoSocial << " | ";
    std::cout << "Nome Fantasia: "<< getNomeFantasia << "\n";
}