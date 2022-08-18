#ifndef BANCO_H
#define BANCO_H

#include "../ExtensoesGerais/ExtensoesGerais.h"

class Banco : public PessoaJuridica {

    public:
        explicit Banco(const string &, const string &, const string &, const string &, const string &);
        ~Banco();
        
        string getNomeBanco() const {return this->nomeBanco;}

        void cadastraPessoa(int);
        void cadastrarConta(int, const string &);
        void removeConta(int);
        void removePessoa(const string &);
        void consultaConta(const string &) const;

    private:
        string nomeBanco;
        std::list<Conta *> contas;
        std::list<Pessoa *> correntistas;
        bool validarNumConta(int) const;
        bool validarNomePessoa(const string &)const ;
};

#endif