#ifndef PILHACHEIAERRO_H
#define PILHACHEIAERRO_H
#include <stdexcept>

class PilhaCheiaErro : public std::out_of_range{
  public:
    PilhaCheiaErro(const char *e) : out_of_range(e) {}
};

#endif