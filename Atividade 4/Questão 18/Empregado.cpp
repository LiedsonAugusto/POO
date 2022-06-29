#include <iostream>
#include "Empregado.h"
using std::cout;
using std::endl;

Empregado::Empregado(string nome_usuario, string sobrenome_usuario, double salarioMensal_usuario)
//Construtor
{
    setNome(nome);
    setSobrenome(sobrenome);
    setSalarioMensal(salarioMensal_usuario);
}

void Empregado::setNome(string nome_usuario)
// set nome
{
    nome = nome_usuario;
}

void Empregado::setSobrenome(string sobrenome_usuario)
// set sobrenome
{
    sobrenome = sobrenome_usuario;
}

void Empregado::setSalarioMensal(double salarioMensal_usuario)
// set salario
{
    if (salarioMensal_usuario < 0)
        salarioMensal = 0;
    else
        salarioMensal = salarioMensal_usuario;
}

string Empregado::getNome()
// get nome
{
    return nome;
}

string Empregado::getSobrenome()
// get sobrenome
{
    return sobrenome;
}

double Empregado::getSalarioMensal()
// get salario
{
    return salarioMensal;
}

void Empregado::aumentoDezPorCento()
// aumento do salario
{
    salarioMensal = salarioMensal + (salarioMensal * 0.1);
    cout << "Aumento adicionado!" << endl;
}

void Empregado::impressao()
//Impressão
{
    cout << "O empregado" << nome << " " << sobrenome << " possui um salário de: " << salarioMensal << endl;
}