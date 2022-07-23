#ifndef IMOVELVELHO_H
#define IMOVELVELHO_H

#include "Imovel.h"

class ImovelVelho : public Imovel{

  public:
  
    ImovelVelho();
    ImovelVelho(string, double, double);

    double getPreco() const;

  private:

    double desconto;

};

#endif