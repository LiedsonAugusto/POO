#include <iostream>
#include "ContaCorrenteComLimite.h"

ContaCorrenteComLimite::ContaCorrenteComLimite(int numConta, double saldo, const Pessoa &p, double limite) 
: Conta(numConta, saldo, p), limite(limite) {}

ContaCorrenteComLimite::~ContaCorrenteComLimite(){
    if (nomeCorrentista){
        delete nomeCorrentista;
    }
}

void ContaCorrenteComLimite::imprimirTransacoes() const {
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

void ContaCorrenteComLimite::operator>>(double saldo){
    if (saldo > this->saldo){
        throw ContaComLimiteExcecao("Valor da conta insuficiente para o saldo.");
    }
    if (saldo > this->limite){
        throw ContaComLimiteExcecao("Valor de retirada superior ao limite da conta.");
    }
    this->saldo -= saldo;
}

void ContaCorrenteComLimite::extrato() const {
    std::cout << "Número da conta: " << getNumConta() << " | ";
    std::cout << "Nome: ";
    getNomeCorrentista();
    std::cout << "Limite: " << getLimite() << '\n';
    std::cout << "Transações: " << '\n';
    imprimirTransacoes();
}

void ContaCorrenteComLimite::adicionaTransacao(const Transacoes &p){
    vectorTransacoes.push_back(p);
}

void ContaCorrenteComLimite::removeTransacao(){
    vectorTransacoes.pop_back();
}

void ContaCorrenteComLimite::transferenciaEntreConta(Conta &conta, double saldo){
    if (saldo > this->saldo){
        throw ContaComLimiteExcecao("Valor a ser transferido é maior que o valor existente na conta.");
    }
    if (saldo > this->limite){
        throw ContaComLimiteExcecao("Valor a ser transferido é superior ao limite da conta.");
    }
    this->saldo -= saldo;
    conta << saldo;
}