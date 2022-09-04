#ifndef PILHAVAZIAERRO_H
#define PILHAVAZIAERRO_H
#include <stdexcept>

class PilhaVaziaErro : public std::out_of_range{
  public:
    PilhaVaziaErro(const char *e) : out_of_range(e) {}
};

#endif