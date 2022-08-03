#ifndef CONTABANCO_H
#define CONTABANCO_H
#include <iostream>


class ContaBanco{

    public:

        ContaBanco(double valor);

        double getSaldo();

        void creditar(double valorACreditar);

        void debitar(double valorADebitar);

        void displaySaldo();


    private:

        double saldo;

};

#endif