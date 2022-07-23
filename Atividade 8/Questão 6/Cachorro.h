#ifndef CACHORRO_H
#define CACHORRO_H

#include "Animal.h"

class Cachorro : public Animal{
  public:
    Cachorro();
    Cachorro(string);
  
    string latir() const;

};


#endif