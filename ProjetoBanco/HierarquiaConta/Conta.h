#ifndef CONTA_H
#define CONTA_H

#include "C:\\Users\\PC\\Documents\\ENG - POO\\ProjetoBanco\\ExtensoesGerais\\ExtensoesGerais.h"
#include <vector>

class Conta{
    public:
        //construtor
        Conta(int numConta, double saldo, Pessoa *p) : numConta(numConta), saldo(saldo) {
            nomeCorrentista = p;
        }
        //destrutor
        virtual ~Conta(){};

        int getNumConta() const {return this->numConta;}
        double getSaldo() const {return this->saldo;}
        string getNomeCorrentista() const {return nomeCorrentista->getNome();}
        virtual void imprimirTransacoes() const = 0;

        //deposito, igual para todos
        void operator<<(double saldo) {this->saldo += saldo; vectorTransacoes.push_back(Transacoes("31/04/2005", saldo, "Depósito"));}
        //retirada
        virtual void operator>>(double) = 0;
        //
        virtual void extrato() const = 0;

        virtual void transferenciaEntreConta(Conta &c, double saldo) = 0;

    protected:
        int numConta;
        double saldo;
        Pessoa *nomeCorrentista;
        std::vector<Transacoes> vectorTransacoes;
};

#endif