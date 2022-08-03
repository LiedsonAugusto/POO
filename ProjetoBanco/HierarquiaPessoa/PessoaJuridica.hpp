#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
//incluindo o arquivo pessoa.hpp
#include "Pessoa.hpp"
//classe herdando de pessoa
class PessoaJuridica : public Pessoa{
    public:
        //construtor
        PessoaJuridica(string, string);
        //retornar o nome
        string getNome() const {return this->nome;}
        //retornar o cnpj
        string getCnpj() const {return this->cnpj;}
        //mostrar os dados da pessoa juridica
         virtual void mostrarDados() const;
    //atributos
    private:
        string cnpj;
};

#endif