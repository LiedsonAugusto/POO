#include <iostream>
#include "C:\\Users\\PC\\Documents\\ENG - POO\\ProjetoBanco\\ExtensoesGerais\\ExtensoesGerais.h"

ContaCorrenteComum::ContaCorrenteComum(int numConta, double saldo, Pessoa *p) : Conta(numConta, saldo, p) {}

ContaCorrenteComum::~ContaCorrenteComum(){
    if(nomeCorrentista){
        delete nomeCorrentista;
    }
}

void ContaCorrenteComum::imprimirTransacoes() const {
    if (this->vectorTransacoes.size() > 30){
        for (auto i = 0; i < 30; i++){
            vectorTransacoes[i].imprimirTransacao();
        }
    } else {
        for (auto i = 0; i < vectorTransacoes.size(); i++){
            vectorTransacoes[i].imprimirTransacao();
        }
    }
}

void ContaCorrenteComum::operator>>(double saldo){
    if (saldo > this->saldo){
        throw "Saldo inferior ao valor que deseja retirar!";
    } 
    this -> saldo -= saldo;
    vectorTransacoes.push_back(Transacoes("31/04/2005", saldo, "Saque"));
    
}

void ContaCorrenteComum::extrato() const {
    std::cout << "Número da conta: " << getNumConta() << " | ";
    std::cout << "Nome: ";
    getNomeCorrentista();
    std::cout << "Transações: " << '\n';
    imprimirTransacoes();
}

// PROVISÓRIA
void ContaCorrenteComum::transferenciaEntreConta(Conta &conta, double saldo){
    if (saldo > this->saldo){
        throw "Valor a ser transferido é maior que o valor existente na conta";
    }
    this->saldo -= saldo;
    conta << saldo;
    vectorTransacoes.push_back(Transacoes("31/04/2005", saldo, "Transferência"));
}