#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "Conta.h"

class ContaPoupanca : public Conta{
    public:
        //Construtor
        ContaPoupanca(int, double, const Pessoa &, string);
        //Destrutor
        ~ContaPoupanca();


    private:
        string data;
};

#endif