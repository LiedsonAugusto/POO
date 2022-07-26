#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using std::string;

class Pessoa{

    public:
        Pessoa();
        Pessoa(string nome, int idade, double altura);

        Pessoa &setNome(string nome);

        Pessoa &setAltura(double altura);

        Pessoa &setIdade(int idade){
                this->idade = idade;
                return *this;
        }

        inline string getNome() const {
            return this->nome;
        }

        inline int getIdade() const {
            return this->idade;
        }

        inline double getAltura() const {
            return this->altura;
        }

    private:
        string nome;
        int idade;
        double altura;
};


#endif