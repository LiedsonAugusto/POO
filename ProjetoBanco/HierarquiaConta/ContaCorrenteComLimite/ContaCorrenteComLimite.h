#ifndef CONTACORRENTECOMLIMITE_H
#define CONTACORRENTECOMLIMITE_H
#include "Conta.h"

class ContaCorrenteComLimite : public Conta{
    public:
    // construtor
    ContaCorrenteComLimite(int, double, const Pessoa &, double);
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
    //adicionar transacao
    virtual void adicionaTransacao(const Transacoes &);
    //remover transacao
    virtual void removeTransacao();
    //transferencia entre conta
    virtual void transferenciaEntreConta(Conta &c, double saldo);
    
    private:
        double limite;
};

#endif