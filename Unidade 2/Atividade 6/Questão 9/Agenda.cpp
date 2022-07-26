#include <iostream>
#include "Agenda.h"

Agenda::Agenda(){
    numPessoas = 0;
}

void Agenda::armazenaPessoa(string nome, int idade, float altura){
    pessoas[numPessoas].setNome(nome).setIdade(idade).setAltura(altura);
    numPessoas += 1;
}

void Agenda::armazenaPessoa(const Pessoa &p){
    pessoas[numPessoas] = p;
    numPessoas += 1;
}

void Agenda::removePessoa(string nome){

    for (auto i = 0; i < numPessoas; i++){
    
        if (pessoas[i].getNome() == nome){
            int percorrer;
            for (percorrer = i; percorrer < numPessoas; percorrer++){
                if (percorrer + 1 < numPessoas){
                    pessoas[percorrer] = pessoas[percorrer+1];
                }
            }
        }
    }
    numPessoas -= 1;
}

int Agenda::buscaPessoa(string nome) const {
    int retorno = 0;
    for (auto i = 0; i < numPessoas; i++){
        if (pessoas[i].getNome() == nome){
            retorno = i;
        }
    }
    return retorno;
}

void Agenda::imprimePovo() const{
    for (auto i = 0; i < numPessoas; i++){
        std::cout << pessoas[i].getNome() << " ";
        std::cout << pessoas[i].getIdade() << " ";
        std::cout << pessoas[i].getAltura() << std::endl;
    }
}

void Agenda::imprimePessoa(int i) const {
    for (auto b = 0; b < numPessoas; b++){
        if (b == i){
            std::cout << pessoas[i].getNome() << " ";
            std::cout << pessoas[i].getIdade() << " ";
            std::cout << pessoas[i].getAltura() << std::endl;
        }
    }
}