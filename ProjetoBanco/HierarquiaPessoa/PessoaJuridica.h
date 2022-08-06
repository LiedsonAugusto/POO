#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
//incluindo o arquivo pessoa.hpp
#include "Pessoa.h"
//classe herdando de pessoa
class PessoaJuridica : public Pessoa{
    public:
        //construtor
        PessoaJuridica(string, string, string, string);
        //retornar o nome
        string getNome() const {return this->nome;}
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