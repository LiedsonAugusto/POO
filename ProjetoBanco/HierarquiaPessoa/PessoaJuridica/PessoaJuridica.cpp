#include <iostream>
#include "../../ExtensoesGerais/ExtensoesGerais.h"

PessoaJuridica::PessoaJuridica(const string &nome,const string &cnpj,const string &razaoSocial,const string &nomeFantasia) : Pessoa(nome), 
cnpj(cnpj), razaoSocial(razaoSocial), nomeFantasia(nomeFantasia) {}

void PessoaJuridica::mostrarDados() const  {
    std::cout << "Nome: " << getNome() << " | ";
    std::cout << "CNPJ: " << getCpfOuCnpj() << " | ";
    std::cout << "Razao Social: " << getRazaoSocial() << " | ";
    std::cout << "Nome Fantasia: "<< getNomeFantasia() << "\n";
}