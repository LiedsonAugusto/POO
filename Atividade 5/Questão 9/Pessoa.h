#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using std::string;

class Pessoa {

    public:
        Pessoa(string nome_usuario, string cpf_usuario);

        void setNome(string nome_usuario){
            nome = nome_usuario;
        }

        void setCpf(string cpf_usuario);

        string getNome() const{
            return nome;
        }

        string getCpf() const{
            return cpf;
        }

        void imprimirCpf() const;

    private:
        string nome;
        string cpf;
        bool cpf_valido;
        int cpfigual(string &);
        void validarCpf(string &);
};


#endif