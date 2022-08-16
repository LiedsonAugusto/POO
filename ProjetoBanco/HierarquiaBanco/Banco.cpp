#include <iostream>
#include "C:\\Users\\PC\\Documents\\ENG - POO\\ProjetoBanco\\ExtensoesGerais\\ExtensoesGerais.h"


Banco::Banco(const string &nomePessoa, const string &nomeFantasia, const string &razaoSocial, const string &cnpj, const string &nomeBanco):
PessoaJuridica(nomePessoa, nomeFantasia, razaoSocial, cnpj), nomeBanco(nomeBanco) {}

Banco::~Banco(){
    for(auto i = 0; i < contas.size(); i++){
        if (contas[i] != nullptr){
            delete contas[i];
        }
    }

    for(auto i = 0; i < correntistas.size(); i++){
        if (correntistas[i] != nullptr){
            delete correntistas[i];
        }
    }
}

void Banco::cadastraPessoa(int escolha){
    string nome, razaoSocial, nomeFantasia, cnpj, cpf;
    switch(escolha){
        //Juridica
        case 1:
            std::cout << "Nome: ";
            std::cin >> nome;
            std::cout << '\n' << "Razao Social: ";
            std::cin >> razaoSocial;
            std::cout << '\n' << "Nome Fantasia: ";
            std::cin >> nomeFantasia;
            std::cout << '\n' << "CNPJ: ";
            std::cin >> cnpj;
            std::cout << '\n';
            correntistas.push_back(new PessoaJuridica(nome, razaoSocial, nomeFantasia, cnpj)); 
            break;
        //Fisica
        case 2:
            std::cout << "Nome: ";
            std::cin >> nome;
            std::cout << '\n' << "CPF: ";
            std::cin >> cpf;
            correntistas.push_back(new PessoaFisica(nome, cpf));
            break;
    }
}

//void Banco::cadastrarConta(int escolha, Pessoa *p){}

void Banco::removeConta(int numConta){
    for(auto i = 0; i < contas.size(); i++){
        if (contas[i]->getNumConta() == numConta){
            contas.erase(contas.begin()+i);
        }
    }
}

void Banco::consultaConta(const string &pessoa) const {
    for (auto i =0 ; i < contas.size(); i++){
        if(contas[i]->getNomeCorrentista() == pessoa){
            contas[i]->extrato();
        }
    }
}