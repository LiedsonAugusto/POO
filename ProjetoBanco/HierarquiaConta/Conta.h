#ifndef CONTA_H
#define CONTA_H

#include "C:\\Users\\PC\\Documents\\ENG - POO\\ProjetoBanco\\ExtensoesGerais\\ExtensoesGerais.h"
#include <vector>

#include "C:\\Users\\PC\\Documents\\ENG - POO\\ProjetoBanco\\HierarquiaPessoa\\Pessoa.h"

class Conta{
    public:
        //construtor
        Conta(int numConta, double saldo, const Pessoa &p) : numConta(numConta), saldo(saldo) {
            *nomeCorrentista = p;
        }
        //destrutor
        virtual ~Conta() {if (nomeCorrentista){delete nomeCorrentista;}};

        int getNumConta() const {return this->numConta;}
        double getSaldo() const {return this->saldo;}
        void getNomeCorrentista() const {return nomeCorrentista->mostrarDados();}
        virtual void imprimirTransacoes() const = 0;

        //deposito, igual para todos
        void operator<<(double saldo) {this->saldo += saldo;}
        //retirada
        virtual void operator>>(double) = 0;
        //
        virtual void extrato() const = 0;

        virtual void adicionaTransacao(const Transacoes &) = 0;
        virtual void removeTransacao() = 0;
        virtual void transferenciaEntreConta(Conta &c, double saldo) = 0;

    protected:
        int numConta;
        double saldo;
        Pessoa *nomeCorrentista;
        std::vector<Transacoes> vectorTransacoes;
};

#endif