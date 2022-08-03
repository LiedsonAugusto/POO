#include <iostream>
#include "ImovelNovo.h"

ImovelNovo::ImovelNovo() : Imovel(){}

ImovelNovo::ImovelNovo(string endereco, double preco, double aumento) : Imovel(endereco, preco), aumento(aumento){}

double ImovelNovo::getPreco() const {
  return (Imovel::getPreco() + (Imovel::getPreco() * (this->aumento/100)));
}