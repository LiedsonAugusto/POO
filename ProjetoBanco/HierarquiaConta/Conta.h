#ifndef CONTA_H
#define CONTA_H
#include "Transacoes.h"
#include <vector>

#include "C:\\Users\\PC\\Documents\\ENG - POO\\ProjetoBanco\\HierarquiaPessoa\\Pessoa.h"

class Conta{
    public:
        //construtor
        Conta(int, double, Pessoa);
        //destrutor
        ~Conta();

        int getNumConta() const {return this->numConta;}
        double getSaldo() const {return this->saldo;}

        //deposito, igual para todos
        virtual const Conta &operator<<(double saldo) {this->saldo += saldo; return *this;}
        //retirada
        virtual const Conta &operator>>(double) = 0;
        virtual void extrato() const = 0;

        void adicionaTransacao(const Transacoes &);
        void removeTransacao();

    private:
        int numConta;
        double saldo;
        Pessoa *nomeCorrentista;
        std::vector<Transacoes> vectorTransacoes;
};

#endif