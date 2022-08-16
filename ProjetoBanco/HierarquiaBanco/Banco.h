#ifndef BANCO_H
#define BANCO_H

#include "C:\\Users\\PC\\Documents\\ENG - POO\\ProjetoBanco\\ExtensoesGerais\\ExtensoesGerais.h"

class Banco : public PessoaJuridica{

    public:
        Banco(const string &, const string &, const string &, const string &, const string &);
        ~Banco();
        
        string getNomeBanco() const {return this->nomeBanco;}

        void cadastraPessoa(int);
        void cadastrarConta(int, Pessoa *);
        void removeConta(int);
        void consultaConta(const string &) const;

    private:
        string nomeBanco;
        std::vector<Conta *> contas;
        std::vector<Pessoa *> correntistas;
};

#endif