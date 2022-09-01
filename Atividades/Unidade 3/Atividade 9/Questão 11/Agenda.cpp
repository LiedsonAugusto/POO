#include "Agenda.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include <iostream>

Agenda::Agenda() : tamanho(0) {
  for (auto i = 0; i < 20; i++) {
    contatos[i] = nullptr;
  }
}

Agenda::~Agenda() {
  for (auto i = 0; i < tamanho; i++) {
    if (contatos[i] != nullptr) {
      delete contatos[i];
    }
  }
}

void Agenda::adicionaContato(const PessoaFisica &pf) {
  if (tamanho + 1 == 20) {
    std::cout << "Agenda de contatos cheia" << '\n';
  } else {
    contatos[tamanho] = new PessoaFisica(pf);
    tamanho += 1;
  }
}

void Agenda::adicionaContato(const PessoaJuridica &pj) {
  if (tamanho + 1 == 20) {
    std::cout << "Agenda de contatos cheia" << '\n';
  } else {
    contatos[tamanho] = new PessoaJuridica(pj);
    tamanho += 1;
  }
}

void Agenda::removeContato(int posicao) {
  if (posicao < tamanho) {
    std::cout << "Não existe contato nesta posição";
  } else {
    delete contatos[posicao];
    for (auto i = posicao; i < tamanho; i++) {
      contatos[i] = contatos[i + 1];
    }
  }
}

void Agenda::busca(string nome) const {
  for (auto i = 0; i < tamanho; i++) {
    if (contatos[i]->getNome() == nome) {
      contatos[i]->imprimir();
    }
  }
}
