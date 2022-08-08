#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "Conta.h"

class ContaPoupanca : public Conta{
    public:
        //Construtor
        ContaPoupanca(int, double, const Pessoa &, string);
        //Destrutor
        ~ContaPoupanca();
        //retorna a data
        string getData() const {return this->data;}

        virtual void imprimirTransacoes() const;
        
        virtual void operator>>(double);

        virtual void extrato() const;

        virtual void adicionaTransacao(const Transacoes &);
        virtual void removeTransacao();
        virtual void transferenciaEntreConta(Conta &c, double saldo);


    private:
        string data;
};

#endif