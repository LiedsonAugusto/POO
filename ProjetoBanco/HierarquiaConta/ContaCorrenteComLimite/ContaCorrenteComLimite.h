#ifndef CONTACORRENTECOMLIMITE_H
#define CONTACORRENTECOMLIMITE_H
#include "C:\\Users\\PC\\Documents\\ENG - POO\\ProjetoBanco\\ExtensoesGerais\\ExtensoesGerais.h"

class ContaCorrenteComLimite : public Conta{
    public:
    // construtor
    ContaCorrenteComLimite(int, double,  Pessoa *, double);
    // destrutor
    ~ContaCorrenteComLimite();
    //mostrar transacoes
    virtual void imprimirTransacoes() const;
    //retorna o limite
    double getLimite() const {return this->limite;}
    //retirada
    virtual void operator>>(double);
    //mostrar o extrato
    virtual void extrato() const;
    //transferencia entre conta
    virtual void transferenciaEntreConta(Conta &c, double saldo);
    
    private:
        double limite;
};

#endif