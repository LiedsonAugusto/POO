#include "ContaCorrenteComum.h"
#include <iostream>

ContaCorrenteComum::~ContaCorrenteComum() {
  if (transacoes) {
    delete[] transacoes;
  }
}

void ContaCorrenteComum::adicionaTransacao(string data, double valorTransicao,
                                           string descricao) {
  if (numTransacoes != 9) {
    transacoes[numTransacoes] = Transacao(data, valorTransicao, descricao);
    numTransacoes += 1;
  } else {
    std::cout << "Transações cheias";
  }
}

void ContaCorrenteComum::extrato() const {
  std::cout << "NUM conta: " << getNumConta() << " | ";
  std::cout << "Nome: " << getNome() << "\n";
  std::cout << "Transações: " << '\n';
  for (auto i = 0; i < numTransacoes; i++) {
    std::cout << '\n';
    transacoes[i].imprimirTransacao();
    std::cout << '\n';
  }
}