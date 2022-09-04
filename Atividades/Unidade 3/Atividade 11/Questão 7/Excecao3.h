#ifndef EXCECAO3_H
#define EXCECAO3_H

#include <stdexcept>

class Excecao3 : public std::runtime_error{
  public:
    Excecao3(const char *e) : runtime_error(e) {}
};

#endif