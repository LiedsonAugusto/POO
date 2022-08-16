#ifndef PESSOA_H
#define PESSOA_H

//incluindo bibliotecas
#include <string>
using std::string;

//nomeação da classe pessoa
class Pessoa{
    public:
        //construtor
        Pessoa(const string &nome) : nome(nome) {}

        //método abstrato para mostrar os dados da pessoa
        virtual void mostrarDados() const = 0;
        virtual string getNome() const {return this->nome;};

    //atributos
    protected:
        string nome;
};

#endif