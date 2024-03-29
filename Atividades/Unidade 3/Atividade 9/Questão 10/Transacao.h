#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <string>
using std::string;

class Transacao {
  public:
    Transacao() = default;
    Transacao(string, double, string);

    string getData() const {return this->data;}
    double getValorTransacao() const {return this->valorTransacao;}
    string getDescricao() const {return this->descricao;}

    void imprimirTransacao() const;

  
  private:
    string data;
    double valorTransacao;
    string descricao;
};

#endif