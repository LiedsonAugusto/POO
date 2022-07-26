#include <iostream>
#include "Imovel.h"

Imovel::Imovel(){
  this->endereco = "Sem endereço";
  this->preco = 0.0;
}

Imovel::Imovel(string endereco, double preco) : endereco(endereco), preco(preco) {}