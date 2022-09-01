#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Contato.h"

class PessoaFisica : public Contato {
public:
  PessoaFisica();
  PessoaFisica(string, string, string, string, string, string);

  string getCpf() const { return this->cpf; }
  string getNascimento() const { return this->nascimento; }
  string getEstadoCivil() const { return this->estadoCivil; }
  string getEndereco() const { return this->endereco; }
  string getEmail() const { return this->email; }
  virtual void imprimir() const override;

private:
  string cpf;
  string nascimento;
  string estadoCivil;
};

#endif