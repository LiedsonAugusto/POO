#include <iostream>
#include "../../ExtensoesGerais/ExtensoesGerais.h"

ContaCorrenteComum::ContaCorrenteComum(int numConta, double saldo, Pessoa *p)
: Conta(numConta, saldo, p) {}

ContaCorrenteComum::~ContaCorrenteComum(){
    if(nomeCorrentista){
        delete nomeCorrentista;
    }
}

void ContaCorrenteComum::imprimirTransacoes() const {
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

void ContaCorrenteComum::operator>>(double saldo){
    if (saldo > this->saldo){
        throw ContaExcecao("Saldo inferior ao valor que deseja retirar!");
    } 
    this -> saldo -= saldo;
    listTransacoes.push_back(Transacoes("31/04/2005", saldo, "Saque"));
    
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
        throw ContaExcecao("Valor a ser transferido é maior que o valor existente na conta");
    }
    this->saldo -= saldo;
    conta << saldo;
    listTransacoes.push_back(Transacoes("31/04/2005", saldo, "Transferência"));
}