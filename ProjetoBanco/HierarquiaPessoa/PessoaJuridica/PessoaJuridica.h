#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
//incluindo o arquivo pessoa.hpp
#include "C:\\Users\\PC\\Documents\\ENG - POO\\ProjetoBanco\\ExtensoesGerais\\ExtensoesGerais.h"
//classe herdando de pessoa
class PessoaJuridica : public Pessoa{
    public:
        //construtor
        PessoaJuridica(const string &, const string &,const string &,const string &);
        //retornar o cnpj
        string getCnpj() const {return this->cnpj;}

        string getRazaoSocial() const {return this->razaoSocial;}

        string getNomeFantasia() const {return this->nomeFantasia;}
        //mostrar os dados da pessoa juridica
         virtual void mostrarDados() const;
    //atributos
    private:
        string nomeFantasia;
        string razaoSocial;
        string cnpj;
};

#endif