#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>

using std::ostream;
using std::string;

class Pessoa {

  friend ostream &operator<<(ostream &, const Pessoa &);

public:
  Pessoa(string);

  void setNome(string);

  string getNome() const;

protected:
  string nome;
};

#endif