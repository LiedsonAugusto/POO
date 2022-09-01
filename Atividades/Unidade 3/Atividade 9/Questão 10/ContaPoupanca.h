#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "Conta.h"

class ContaPoupanca : public Conta{

  ContaPoupanca(int, string, double, string);
  virtual ~ContaPoupanca();

  virtual void adicionaTransacao(string, double, string);
  string getAniversarioConta() const {return this->aniversarioConta;}

  virtual void extrato() const;

  private:
    string aniversarioConta;
};

#endif