#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

//#include "../../ExtensoesGerais/ExtensoesGerais.h"
#include "../Pessoa.h"

class PessoaJuridica : public Pessoa{
    public:

        explicit PessoaJuridica(const string &, const string &,const string &,const string &);

        string getNome() const override {return this->nome;}

        string getCnpj() const {return this->cnpj;}

        string getRazaoSocial() const {return this->razaoSocial;}

        string getNomeFantasia() const {return this->nomeFantasia;}

        void mostrarDados() const override;
    //atributos
    private:
        string nomeFantasia;
        string razaoSocial;
        string cnpj;
};

#endif