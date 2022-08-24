#include <iostream> 
#include "../../ExtensoesGerais/ExtensoesGerais.h"

ContaPoupanca::ContaPoupanca(int numConta, double saldo, Pessoa *p, const string &data)
: Conta(numConta, saldo, p), data(data) {}

ContaPoupanca::~ContaPoupanca(){
    delete nomeCorrentista;
}

void ContaPoupanca::imprimirTransacoes() const {
    if (this->listTransacoes.size() > 30){
        int contador = 0;
        for (auto &list : listTransacoes){
            if (contador == 29){
                break;
            } else {
                list.imprimirTransacao();
            }
            contador++;
        }
    } else {
        for (auto &list : listTransacoes){
            list.imprimirTransacao();
        }
    }
}

void ContaPoupanca::operator>>(double saldo){
    if (saldo == 0){
        throw ContaExcecao("Valor para retirada inválido");
    }
    if (saldo > this->saldo){
        throw ContaExcecao("Saldo inferior ao valor que deseja retirar!");
    }
    this -> saldo -= saldo;
    listTransacoes.push_back(Transacoes("31/04/2005", saldo, "Saque"));
}

void ContaPoupanca::extrato() const {
    std::cout << "---------- CONTA POUPANÇA ----------\n";
    std::cout << "Número da conta: " << getNumConta();
    std::cout << "\nNome: " << getNome();
    std::cout << "\nSaldo: " << getSaldo();
    std::cout << "\nData da conta: " << getData() << '\n';
    if (!this->listTransacoes.empty()){
        std::cout << "Transações: " << '\n';
        imprimirTransacoes();
    }
    std::cout << "--------------------------------------\n";
}

void ContaPoupanca::transferenciaEntreConta(Conta &conta, double saldo){
    if (&conta == this){
        throw ContaExcecao("Não se deve fazer transferência para a mesma conta");
    }
    if (saldo > this->saldo){
        throw ContaExcecao("Valor a ser transferido é maior que o valor existente na conta");
    }
    this->saldo -= saldo;
    conta << saldo;
    listTransacoes.push_back(Transacoes("31/04/2005", saldo, "Transferência"));
}