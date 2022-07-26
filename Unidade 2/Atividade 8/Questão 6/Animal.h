#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using std::string;

class Animal{
  public:
    
    Animal();
    Animal(string);

    void setNome(string &nome) {this->nome = nome;}

    void setRaca(string &raca) {this->raca = raca;}

    string getNome() const {return this->nome;}

    string getRaca() const {return this->raca;}

    string caminha() const;

  private:
    string nome;
    string raca;
};

#endif