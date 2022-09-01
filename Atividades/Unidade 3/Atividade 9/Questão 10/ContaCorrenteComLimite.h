#ifndef CONTACORRENTECOMLIMITE_H
#define CONTACORRENTECOMLIMITE_H

#include "Conta.h"

class ContaCorrenteComLimite : public Conta {
public:
  ContaCorrenteComLimite(int, string, double, double);

  ~ContaCorrenteComLimite();

  double getLimite() const {return this->limite;}
  virtual void retirada(double saldo);
  virtual void extrato() const;
  virtual void adicionaTransacao(string, double, string);

private:
  double limite;
};

#endif