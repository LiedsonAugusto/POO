#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;
class Pessoa{
    public:

        explicit Pessoa(const string &nome) : nome(nome) {}

        virtual void mostrarDados() const = 0;
        virtual string getNome() const {return this->nome;};

    protected:
        string nome;
};

#endif