#ifndef CONTACORRENTECOMUM_H
#define CONTACORRENTECOMUM_H
#include "C:\\Users\\PC\\Documents\\ENG - POO\\ProjetoBanco\\ExtensoesGerais\\ExtensoesGerais.h"

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
        // NECESSÁRIO REVISAR QUANDO FOR FEITA A IMPLEMENTAÇÃO DO BANCO
        virtual void transferenciaEntreConta(Conta &c, double saldo);

};

#endif