#include <iostream>
#include "../../ExtensoesGerais/ExtensoesGerais.h"

ContaCorrenteComLimite::ContaCorrenteComLimite(int numConta, double saldo, Pessoa *p, double limite)
: Conta(numConta, saldo, p), limite(limite) {}

ContaCorrenteComLimite::~ContaCorrenteComLimite(){
    delete nomeCorrentista;
}

void ContaCorrenteComLimite::imprimirTransacoes() const {
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

void ContaCorrenteComLimite::operator>>(double saldo){
    if (saldo == 0){
        throw ContaExcecao("Valor para retirada inválido");
    }
    if (saldo > this->saldo){
        throw ContaExcecao("Valor da conta insuficiente para o saldo.");
    }
    if (saldo > this->limite){
        throw ContaExcecao("Valor de retirada superior ao limite da conta.");
    }
    this->saldo -= saldo;
    listTransacoes.push_back(Transacoes("31/04/2005", saldo, "Saque"));
}

void ContaCorrenteComLimite::extrato() const {
    std::cout << "---------- CONTA LIMITE ----------\n";
    std::cout << "Número da conta: " << getNumConta();
    std::cout << "\nNome: " << getNome();
    std::cout << "\nSaldo: " << getSaldo();
    std::cout << "\nLimite: " << getLimite() << '\n';
    if (!this->listTransacoes.empty()){
        std::cout << "Transações: " << '\n';
        imprimirTransacoes();
    }
    std::cout << "--------------------------------------\n";
}

void ContaCorrenteComLimite::transferenciaEntreConta(Conta &conta, double saldo){
    if (&conta == this){
        throw ContaExcecao("Não se deve fazer transferência para a mesma conta");
    }
    if (saldo > this->saldo){
        throw ContaExcecao("Valor a ser transferido é maior que o valor existente na conta.");
    }
    if (saldo > this->limite){
        throw ContaExcecao("Valor a ser transferido é superior ao limite da conta.");
    }
    this->saldo -= saldo;
    conta << saldo;
    listTransacoes.push_back(Transacoes("31/04/2005", saldo, "Transferência"));
}