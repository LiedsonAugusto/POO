#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>
using std::string;

class Empregado{

public:
    //construtor
    Empregado(string nome_usuario, string sobrenome_usuario, double salarioMensal_usuario);

    //set's
    void setNome(string nome_usuario);
    void setSobrenome(string sobrenome_usuario);
    void setSalarioMensal(double salarioMensal_usuario);

    //get's
    string getNome();
    string getSobrenome();
    double getSalarioMensal();

    //aumento
    void aumentoDezPorCento();

    //impressão
    void impressao();

private:
    //atributos
    string nome;
    string sobrenome;
    double salarioMensal;

};

#endif