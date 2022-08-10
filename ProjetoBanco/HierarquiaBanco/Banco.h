#ifndef BANCO_H
#define BANCO_H

#include "C:\\Users\\PC\\Documents\\ENG - POO\\ProjetoBanco\\ExtensoesGerais\\ExtensoesGerais.h"

class Banco : public PessoaJuridica{

    public:
        Banco(string);

        void cadastrarConta(const Conta &);
        void removeConta(int);
        void consultaConta() const;

    private:
        string nome;
        std::vector<Conta> contas;
        std::vector<Pessoa> correntistas;
};

#endif