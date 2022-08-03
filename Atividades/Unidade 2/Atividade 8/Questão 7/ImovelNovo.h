#ifndef IMOVELNOVO_H
#define IMOVELNOVO_H

#include "Imovel.h"

class ImovelNovo : public Imovel{

  public:

    ImovelNovo();
    ImovelNovo(string, double, double);

    double getPreco() const ;

  private:

    double aumento;

};

#endif