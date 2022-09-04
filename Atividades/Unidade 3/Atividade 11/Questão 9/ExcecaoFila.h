#ifndef EXCECAOFILA_H
#define EXCECAOFILA_H
#include <stdexcept>

class ExcecaoFila : public std::logic_error{
  public:
    ExcecaoFila(const char *e) : logic_error(e) {}
};

#endif