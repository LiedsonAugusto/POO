#include <iostream>
#include "../ExtensoesGerais/ExtensoesGerais.h"
#include "Banco.h"

#include <cstdlib>
#include <ctime>
#include<bits/stdc++.h>

Banco::Banco(const string &nomePessoa, const string &cnpj, const string &razaoSocial, const string &nomeFantasia, const string &nomeBanco):
PessoaJuridica(nomePessoa, cnpj, razaoSocial, nomeFantasia), nomeBanco(nomeBanco) {}

Banco::~Banco(){
    for(auto &list : contas){
        delete list;
    }

    for(auto &list2 : correntistas){
        delete list2;
    }
}

void Banco::cadastraPessoa(int escolha){
    string nome, razaoSocial, nomeFantasia, cnpj, cpf;
    std::getchar();
    switch(escolha){
        //Juridica
        case 1:
            std::cout << "\nNome: ";
            std::getline(std::cin, nome);
            std::cout << "\nRazao Social: ";
            std::getline(std::cin, razaoSocial);
            std::cout << "\nNome Fantasia: ";
            std::getline(std::cin, nomeFantasia);
            std::cout << "\nCNPJ: ";
            std::getline(std::cin, cnpj);
            if(validarNomePessoa(cnpj)){
                throw BancoExcecao("\nJá existe conta com esse CNPJ.");
            }
            correntistas.push_back(new PessoaJuridica(nome, cnpj, razaoSocial, nomeFantasia));
            break;
        //Fisica
        case 2:
            std::cout << "\nNome: ";
            std::getline(std::cin, nome);
            std::cout << "CPF: ";
            std::getline(std::cin, cpf);
            if(validarNomePessoa(cpf)){
                throw BancoExcecao("\nJá existe conta com esse CPF.");
            }
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

bool Banco::validarNomePessoa(const string &cpfOuCnpj)const{
    for (auto &list : correntistas){
        if (list->getCpfOuCnpj() == cpfOuCnpj){
            return true;
        }
    }
    return false;
}

void Banco::cadastrarConta(int escolha, const string &cpfOuCnpj){
    
    string data;
    int numConta;
    double saldo;
    if (!validarNomePessoa(cpfOuCnpj)){
        throw BancoExcecao("\nPessoa não cadastrada, cadastre primeiro para criar a conta");
    }

    std::list<Pessoa *>::iterator ite2;
    for(auto &list : correntistas){
        if(list->getCpfOuCnpj() == cpfOuCnpj){
            ite2 = std::find (correntistas.begin(), correntistas.end(), list);
        }

    }

    unsigned seed = time(nullptr);
    srand(seed);
    numConta = rand()%10000;
    while(validarNumConta(numConta)){
        numConta = rand()%10000;
    }

    switch (escolha){
        //comum
        case 1:
            std::cout << "Digite o valor do saldo: ";
            std::cin >> saldo;
            if(saldo < 0){
                throw BancoExcecao("\nSaldo negativo é inexistente");
            }
            contas.push_back(new ContaCorrenteComum(numConta, saldo, *ite2));
            break;
        //poupança
        case 2:
            std::cout << "Digite o valor do saldo: ";
            std::cin >> saldo;
            if(saldo < 0){
                throw BancoExcecao("\nSaldo negativo é inexistente");
            }
            contas.push_back(new ContaPoupanca(numConta, saldo, *ite2, "31/04/2005"));
            break;
        //limite
        case 3:
            std::cout << "Digite o valor do saldo: ";
            std::cin >> saldo;
            if(saldo < 0){
                throw BancoExcecao("\nSaldo negativo é inexistente");
            }
            contas.push_back(new ContaCorrenteComLimite(numConta, saldo, *ite2, 1000));
            break;
    }
    std::cout << "\n* NÚMERO DA CONTA * - " << numConta << '\n';
}

void Banco::removePessoa(const string &cpfoucnpj) {
    if (!validarNomePessoa(cpfoucnpj)){
        throw BancoExcecao("\nPessoa não cadastrada");
    }
    for (auto &list : contas){
        if (list->getCpfOuCnpjCorrentista() == cpfoucnpj){
            delete list;
        }
    }
    std::list<Pessoa *>::iterator ite2 = correntistas.begin();

    for (auto &list : correntistas){
        if (list->getCpfOuCnpj() == cpfoucnpj){
            correntistas.erase(ite2);
            delete list;
        }
        ++ite2;
    }
}

void Banco::removeConta(int numConta){
    if (!validarNumConta(numConta)){
        throw BancoExcecao("\nConta não existente.");
    }
    auto ite2 = contas.begin();
    for(auto &list : contas){
        if (list->getNumConta() == numConta){
            contas.erase(ite2);
            delete list;
        }
        ++ite2;
    }
}

void Banco::consultaContas(const string &cpfOuCnpj) const {
    if (!validarNomePessoa(cpfOuCnpj)){
        throw BancoExcecao("\nPessoa não cadastrada.");
    }
    for (auto &list : contas){
        if(list->getCpfOuCnpjCorrentista() == cpfOuCnpj){
            list->extrato();
        }
    }
}

void Banco::consultaUnicaConta(int numConta) const {
    if (!validarNumConta(numConta)){
        throw BancoExcecao("\nConta não existente.");
    }
    for (auto &list : contas){
        if (list->getNumConta() == numConta){
            list->extrato();
        }
    }
}

void Banco::depositarNaConta(int numConta, double saldo) {
    if (!validarNumConta(numConta)){
        throw BancoExcecao("\nConta não existente.");
    }
    for (auto &list: contas){
        if (list->getNumConta() == numConta){
            *list << saldo;
        }
    }
}

void Banco::retiradaDaConta(int numConta, double saldo) {
    if (!validarNumConta(numConta)){
        throw BancoExcecao("\nConta não existente.");
    }
    for (auto &list: contas){
        if (list->getNumConta() == numConta){
            *list >> saldo;
        }
    }
}

void Banco::transferenciaEntreContas(int numConta1, int numConta2, double saldo) {
    if (!validarNumConta(numConta1)){
        throw BancoExcecao("\nConta não existente.");
    }
    if (!validarNumConta(numConta2)){
        throw BancoExcecao("\nConta não existente.");
    }
    for (auto &list : contas){
        if (list->getNumConta() == numConta1){
            for (auto &list2 : contas){
                if (list2->getNumConta() == numConta2){
                    if(list->getCpfOuCnpjCorrentista() == list2->getCpfOuCnpjCorrentista()){
                        throw ContaExcecao("\nNão se pode fazer transferência para a mesma conta.");
                    }
                    list->transferenciaEntreConta(*list2, saldo);
                }
            }
        }
    }
}

bool Banco::conexaoContaCliente(int numConta, const string& cpfOuCnpj) const {
    if (!validarNumConta(numConta)){
        throw BancoExcecao("\nConta não existente.");
    }
    if (!validarNomePessoa(cpfOuCnpj)){
        throw BancoExcecao("\nPessoa não cadastrada");
    }
    for (auto &list : contas){
        if (list->getNumConta() == numConta && list->getCpfOuCnpjCorrentista() == cpfOuCnpj){
            return true;
        }
    }
    return false;
}

void Banco::consultaPessoa(const string &cpfOuCnpj) const {
    if (!validarNomePessoa(cpfOuCnpj)){
        throw BancoExcecao("\nPessoa não cadastrada");
    }
    for (auto &list : correntistas){
        if (list->getCpfOuCnpj() == cpfOuCnpj){
            list->mostrarDados();
        }
    }
}
