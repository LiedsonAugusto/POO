#include <iostream>
#include "../ExtensoesGerais/ExtensoesGerais.h"


Banco::Banco(const string &nomePessoa, const string &nomeFantasia, const string &razaoSocial, const string &cnpj, const string &nomeBanco):
PessoaJuridica(nomePessoa, nomeFantasia, razaoSocial, cnpj), nomeBanco(nomeBanco) {}

Banco::~Banco(){
    for(auto &list : contas){
        delete list;
    }

    for(auto &list : correntistas){
        if (list != nullptr){
            delete list;
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
            if(validarNomePessoa(nome)){
                throw BancoExcecao("Já existe conta com esse nome.");
            }
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
            if(validarNomePessoa(nome)){
                throw BancoExcecao("Já existe conta com esse nome.");
            }
            std::cout << '\n' << "CPF: ";
            std::cin >> cpf;
            correntistas.push_back(new PessoaFisica(nome, cpf));
            break;
    }
}

bool Banco::validarNumConta(int numConta)const{
    for(auto &list : contas){
        if (list->getNumConta() == numConta){
            return true;
        }
    }
    return false;
}

bool Banco::validarNomePessoa(const string &nomePessoa)const{
    for (auto &list : correntistas){
        if (list->getNome() == nomePessoa){
            return true;
        }
    }
    return false;
}

void Banco::cadastrarConta(int escolha, const string &nomePessoa){
    
    string data;
    int numConta;
    double saldo, limite;
    switch (escolha){
        //comum
        case 1:
            break;
        //poupança
        case 2:
            break;
        //limite
        case 3:
            break;
    }
}

void Banco::removeConta(int numConta){
    if (!validarNumConta(numConta)){
        throw BancoExcecao("Conta não existente.");
    }
    std::list<Conta *>::iterator ite2 = contas.begin();
    int contador = 0; 
    for(auto &list : contas){
        if (list->getNumConta() == numConta){
            advance(ite2, contador);
            delete list;
            contas.erase(ite2);
        }
        contador++;
    }
}

void Banco::consultaConta(const string &pessoa) const {
    if (!validarNomePessoa(pessoa)){
        throw BancoExcecao("Pessoa não cadastrada.");
    }
    for (auto &list : contas){
        if(list->getNomeCorrentista() == pessoa){
            list->extrato();
        }
    }
}