#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

//incluindo o arquivo Pessoa.hpp
#include "Pessoa.h"

//herança da classe pessoa
class PessoaFisica : public Pessoa{
    public:
        //construtor
        PessoaFisica(string, string);

        //retornar o nome
        string getNome() const {return this->nome;}
        //retornar o cpf
        string getCpf() const {return this->cpf;}
        //mostrar os dados da pessoa fisica
        virtual void mostrarDados() const;
    //atributos
    private:
        string cpf;
};

#endif