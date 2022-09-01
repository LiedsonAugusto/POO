#ifndef AGENDA_H
#define AGENDA_H
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

class Agenda {
public:
  Agenda();
  ~Agenda();

  void adicionaContato(const PessoaFisica &);
  void adicionaContato(const PessoaJuridica &);
  void removeContato(int);
  void busca(string) const;

private:
  Contato *contatos[20];
  int tamanho;
};

#endif