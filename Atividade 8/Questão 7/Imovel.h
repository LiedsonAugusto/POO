#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>

using std::string;

class Imovel{
  public:
    Imovel();
    Imovel(string, double);

    void setEndereco(string endereco){
      this->endereco = endereco;
    }

    string getEndereco() const {
      return this->endereco;
    }

    void setPreco(double preco){
      this->preco = preco;
    }

    double getPreco() const {
      return this->preco;
    }

  private:
    string endereco;
    double preco;
};

#endif