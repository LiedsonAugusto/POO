#include <iostream>
#include "ImovelVelho.h"

ImovelVelho::ImovelVelho() : Imovel() {}

ImovelVelho::ImovelVelho(string endereco, double preco, double desconto) : Imovel(endereco, preco), desconto(desconto) {}

double ImovelVelho::getPreco() const{
  return (Imovel::getPreco() - (Imovel::getPreco() * (desconto/100)));
}