#include <iostream>
#include "ContaCorrenteComLimite.h"

ContaCorrenteComLimite::ContaCorrenteComLimite(int num, string nome, double saldo, double limite) : Conta(num, nome, saldo), limite(limite) {}

ContaCorrenteComLimite::~ContaCorrenteComLimite(){
  if (transacoes){
    delete []  transacoes;
  }
}

void ContaCorrenteComLimite::adicionaTransacao(string data, double valorTransicao,
                                           string descricao) {
  if (numTransacoes != 9) {
    transacoes[numTransacoes] = Transacao(data, valorTransicao, descricao);
    numTransacoes += 1;
  } else {
    std::cout << "Transações cheias";
  }
}

void ContaCorrenteComLimite::retirada(double saldo){
  if (this->saldo - saldo < (-(this->limite))){
    std::cout << "Erro, valor inferior ao limite";
  } else {
    this->saldo -= saldo;
  }
}

void ContaCorrenteComLimite::extrato() const {
  std::cout << "NUM conta: " << getNumConta() << " | ";
  std::cout << "Nome: " << getNome() << "\n";
  std::cout << "Limite: " << getLimite() << '\n';
  std::cout << "Transações: " << '\n';
  for (auto i = 0; i < numTransacoes; i++) {
    std::cout << '\n';
    transacoes[i].imprimirTransacao();
    std::cout << '\n';
  }
}