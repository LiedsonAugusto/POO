#include <iostream> 
#include "ContaPoupanca.h"

ContaPoupanca::ContaPoupanca(int numConta, double saldo, const Pessoa &p, string data) : Conta(numConta, saldo, p),
data(data) {}

ContaPoupanca::~ContaPoupanca(){
    if (nomeCorrentista){
        delete nomeCorrentista;
    }
}

void ContaPoupanca::imprimirTransacoes() const {
    for (auto i = 0; i < vectorTransacoes.size(); i++){
        vectorTransacoes[i].imprimirTransacao();
    }
}

void ContaPoupanca::operator>>(double saldo){
    if (saldo > this->saldo){
        throw "Saldo inferior ao valor que deseja retirar!";
    } else {
        this -> saldo -= saldo;
    }
}

void ContaPoupanca::extrato() const {
    std::cout << "Número da conta: " << getNumConta() << " | ";
    std::cout << "Nome: ";
    getNomeCorrentista();
    std::cout << "Data da conta: ";
    getData();
    std::cout << "\nTransações: " << '\n';
    imprimirTransacoes();
}

void ContaPoupanca::adicionaTransacao(const Transacoes &p){
    vectorTransacoes.push_back(p);
}

void ContaPoupanca::removeTransacao(){
    vectorTransacoes.pop_back();
}

// PROVISÓRIA
void ContaPoupanca::transferenciaEntreConta(Conta &conta, double saldo){
    if (saldo > this->saldo){
        throw "Valor a ser transferido é maior que o valor existente na conta";
    }
    this->saldo -= saldo;
    conta << saldo;
}