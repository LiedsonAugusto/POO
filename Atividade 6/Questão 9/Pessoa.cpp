#include <iostream>
#include "Pessoa.h"

Pessoa::Pessoa(){
    this->nome = "Sem nome";
    this->idade = 0;
    this->altura = 0;
}

Pessoa::Pessoa(string nome, int idade, double altura){
    setNome(nome);
    setIdade(idade);
    setAltura(altura);
}

Pessoa &Pessoa::setNome(string nome){
    this->nome = nome;
    return *this;
}

Pessoa &Pessoa::setAltura(double altura){
    this->altura = altura;
    return *this;
}