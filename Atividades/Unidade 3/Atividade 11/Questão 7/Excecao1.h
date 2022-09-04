#ifndef EXCECAO1_H
#define EXCECAO1_H

#include <stdexcept>

class Excecao1 : public std::runtime_error{
  public:
    Excecao1(const char *e) : runtime_error(e) {}
};

#endif