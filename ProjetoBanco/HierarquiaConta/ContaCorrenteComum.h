#ifndef CONTACORRENTECOMUM_H
#define CONTACORRENTECOMUM_H
#include "Conta.h"

class ContaCorrenteComum : public Conta{
    public:
        //construtor
        ContaCorrenteComum(int, double, const Pessoa &);
        //destrutor
        virtual ~ContaCorrenteComum();
        //imprimir transacoes
        virtual void imprimirTransacoes() const;
        //retirada
        virtual void operator>>(double);
        //impressão de tudo
        virtual void extrato() const;
        //adicionar transição
        virtual void adicionaTransacao(const Transacoes &);
        //remover transição
        virtual void removeTransacao();
        //transferência entre contas
        virtual void transferenciaEntreConta(const Conta &c, double saldo);

};

#endif