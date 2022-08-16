#include "Transacoes.h"
#include <iostream>

Transacoes::Transacoes(string data, double valorTransacao, string descricao)
    : data(data), valorTransacao(valorTransacao), descricao(descricao) {}

void Transacoes::imprimirTransacao() const {
  std::cout << "Data: " << getData() << " | "
            << "Valor da transação: " << getValorTransacao() << " | "
            << "Descrição: " << getDescricao() << '\n';
}