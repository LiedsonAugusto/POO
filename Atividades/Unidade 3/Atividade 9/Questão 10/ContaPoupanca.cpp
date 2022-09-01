#include "ContaPoupanca.h"
#include <iostream>

ContaPoupanca::ContaPoupanca(int numConta, string nome, double saldo,
                             string aniversarioConta)
    : Conta(numConta, nome, saldo), aniversarioConta(aniversarioConta) {}

ContaPoupanca::~ContaPoupanca() {
  if (transacoes) {
    delete[] transacoes;
  }
}

void ContaPoupanca::extrato() const {
  std::cout << "NUM conta: " << getNumConta() << " | ";
  std::cout << "Nome: " << getNome() << "\n";
  std::cout << "Aniversário da conta: " << getAniversarioConta() << '\n';
  std::cout << "Transações: " << '\n';
  for (auto i = 0; i < numTransacoes; i++) {
    std::cout << '\n';
    transacoes[i].imprimirTransacao();
    std::cout << '\n';
  }
}

void ContaPoupanca::adicionaTransacao(string data, double valorTransicao,
                                      string descricao) {
  if (numTransacoes != 9) {
    transacoes[numTransacoes] = Transacao(data, valorTransicao, descricao);
    numTransacoes += 1;
  } else {
    std::cout << "Transações cheias";
  }
}