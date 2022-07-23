#ifndef CLIENTE_H
#define CLIENTE_H

#include "PessoaFisica.h"

class Cliente : public PessoaFisica{

  friend ostream &operator<<(ostream &, const Cliente &);

  public:

    Cliente(string, string, string, string);

    void setTelefone(string);

    void setEndereco(string);

    string getTelefone() const { return this->telefone; }

    string getEndereco() const { return this->endereco; }

  private:

    string telefone;
    string endereco;

};

#endif