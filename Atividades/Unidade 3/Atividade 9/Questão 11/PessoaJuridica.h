#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
#include "Contato.h"

class PessoaJuridica : public Contato {
public:
  PessoaJuridica();
  PessoaJuridica(string, string, string, string, string, string);

  string getCnpj() const { return this->cnpj; }
  string getInscricaoEstadual() const { return this->inscricaoEstadual; }
  string getRazaoSocial() const { return this->razaoSocial; }
  string getEndereco() const { return this->endereco; }
  string getEmail() const { return this->email; }
  virtual void imprimir() const override;

private:
  string cnpj;
  string inscricaoEstadual;
  string razaoSocial;
};

#endif