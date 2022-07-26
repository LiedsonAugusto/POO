#include <iostream>
#include "ContaBanco.h"
using std::cout;
using std::endl;


//Implementação

ContaBanco::ContaBanco(double valor)
//construtor
{  
    if (valor < 0.0)
        saldo = 0.0;
    else
        saldo = valor;
}

double ContaBanco::getSaldo()
// método getar
{
    return saldo;
}

void ContaBanco::creditar(double valorACreditar)
// método creditar
{
    saldo += valorACreditar;
    cout << "Valor adicionado! " << endl;
}

void ContaBanco::debitar(double valorADebitar)
// método debitar
{
    if (valorADebitar > saldo)
        cout << "ERRO, valor a ser debitado e maior que o     saldo, o valor do saldo não sera alterado." << endl;
    else{
        saldo -= valorADebitar;
        cout << "Valor retirado! " << endl;
    }
}

void ContaBanco::displaySaldo()
// método para mostrar saldo
{
    cout << "O saldo da conta e igual a : " << getSaldo() << endl;
}