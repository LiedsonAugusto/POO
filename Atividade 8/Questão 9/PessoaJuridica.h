#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"

class PessoaFisica : public Pessoa {

  public:

    PessoaFisica(string, string);

    void setCpf(string);

    string getCpf() const;

  private:

    string cpf;

};


#endif