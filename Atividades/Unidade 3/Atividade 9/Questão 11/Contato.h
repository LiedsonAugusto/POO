#ifndef CONTATOS_H
#define CONTATOS_H

#include <string>
using std::string;

class Contato {

public:
  Contato() {}
  Contato(string nome, string endereco, string email)
      : nome(nome), endereco(endereco), email(email){};
  virtual ~Contato(){}

  virtual void imprimir() const = 0;
  string getNome() const {return this->nome;}

protected:
  string nome;
  string endereco;
  string email;
};

#endif