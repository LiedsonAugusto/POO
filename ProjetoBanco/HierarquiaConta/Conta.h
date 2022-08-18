#ifndef CONTA_H
#define CONTA_H

//#include "../ExtensoesGerais/ExtensoesGerais.h"
#include "Transacoes/Transacoes.h"
#include <list>

class Conta{
    public:

        explicit Conta(int numConta, double saldo, Pessoa *p) : numConta(numConta), saldo(saldo) {
            nomeCorrentista = p;
        }

        virtual ~Conta(){};

        int getNumConta() const {return this->numConta;}
        double getSaldo() const {return this->saldo;}
        string getNomeCorrentista() const {return nomeCorrentista->getNome();}
        virtual void imprimirTransacoes() const = 0;


        void operator<<(double saldo) {this->saldo += saldo; listTransacoes.push_back(Transacoes("31/04/2005", saldo, "Depósito"));}

        virtual void operator>>(double) = 0;

        virtual void extrato() const = 0;

        virtual void transferenciaEntreConta(Conta &c, double saldo) = 0;

    protected:
        int numConta;
        double saldo;
        Pessoa *nomeCorrentista;
        std::list<Transacoes> listTransacoes;
};

#endif