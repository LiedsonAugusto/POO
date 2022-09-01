#ifndef CONTACORRENTECOMUM_H
#define CONTACORRENTECOMUM_H

#include "Conta.h"

class ContaCorrenteComum : public Conta {
public:
  ContaCorrenteComum(int numConta, string nome, double saldo)
      : Conta(numConta, nome, saldo) {}
  virtual ~ContaCorrenteComum();
  virtual void extrato() const;
  virtual void adicionaTransacao(string, double, string);
};

#endif