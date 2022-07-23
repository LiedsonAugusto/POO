#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include "Pessoa.h"

class PessoaJuridica : public Pessoa{

  public:

    PessoaJuridica(string, string, string, string);

    void setCnpj(string);

    void setNomeFantasia(string);

    void setRazaoSocial(string);

    string getCnpj() const;

    string getNomeFantasia() const;

    string getRazaoSocial() const;


  private:

    string cnpj;
    string nomeFantasia;
    string razaoSocial;

};

#endif