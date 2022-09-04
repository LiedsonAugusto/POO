#ifndef EXCECAO2_H
#define EXCECAO2_H

#include <stdexcept>

class Excecao2 : public std::runtime_error{
  public:
    Excecao2(const char *e) : runtime_error(e) {}
};

#endif