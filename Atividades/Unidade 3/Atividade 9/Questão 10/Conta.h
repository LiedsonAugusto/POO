#ifndef CONTA_H
#define CONTA_H

#include "Transacao.h";
#include <string>
using std::string;

class Conta {
public:
  Conta() : numTransacoes(0), numConta(0), nome(""), saldo(0.0) {transacoes=nullptr;}
  virtual ~Conta(){};
  Conta(int numConta, string nome, double saldo)
      : numConta(numConta), nome(nome), saldo(saldo), numTransacoes(0) {
    transacoes = new Transacao[10];
  }

  virtual int getNumConta() const { return this->numConta; };
  virtual string getNome() const { return this->nome; };
  virtual double getSaldo() const { return this->saldo; };

  void deposito(double saldo) { this->saldo += saldo; }
  virtual void retirada(double saldo) { this->saldo = (this->saldo - saldo != 0) ? this->saldo -= saldo : this->saldo; }
  virtual void extrato() const = 0;

  virtual void adicionaTransacao(string, double, string) = 0;

protected:
  Transacao *transacoes;
  int numTransacoes;
  int numConta;
  string nome;
  double saldo;
};

#endif