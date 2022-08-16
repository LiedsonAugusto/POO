#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

//incluindo o arquivo Pessoa.hpp
#include "C:\\Users\\PC\\Documents\\ENG - POO\\ProjetoBanco\\ExtensoesGerais\\ExtensoesGerais.h"
//herança da classe pessoa
class PessoaFisica : public Pessoa{
    public:
        //construtor
        PessoaFisica(const string &, const string &);
        //retornar o cpf
        string getCpf() const {return this->cpf;}
        //mostrar os dados da pessoa fisica
        virtual void mostrarDados() const;
    //atributos
    private:
        string cpf;
};

#endif