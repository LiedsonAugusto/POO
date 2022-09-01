#include "Transacao.h"
#include <iostream>

Transacao::Transacao(string data, double valorTransacao, string descricao)
    : data(data), valorTransacao(valorTransacao) {
  descricao = (valorTransacao > 0) ? "CRÉDITO" : "DÉBITO";
}

void Transacao::imprimirTransacao() const {
  std::cout << "Data: " << getData() << " | "
            << "Valor da transação: " << getValorTransacao() << " | "
            << "Descrição: " << getDescricao() << '\n';
}