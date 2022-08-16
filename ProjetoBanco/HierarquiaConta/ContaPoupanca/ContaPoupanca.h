#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "C:\\Users\\PC\\Documents\\ENG - POO\\ProjetoBanco\\ExtensoesGerais\\ExtensoesGerais.h"

class ContaPoupanca : public Conta{
    public:
        //Construtor
        ContaPoupanca(int, double, Pessoa *, const string &);
        //Destrutor
        ~ContaPoupanca();
        //retorna a data
        string getData() const {return this->data;}

        virtual void imprimirTransacoes() const;
        
        virtual void operator>>(double);

        virtual void extrato() const;

        virtual void transferenciaEntreConta(Conta &c, double saldo);


    private:
        string data;
};

#endif