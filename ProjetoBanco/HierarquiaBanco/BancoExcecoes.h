#ifndef BANCOEXCECOES_H
#define BANCOEXCECOES_H

#include <stdexcept>

class BancoExcecao : public std::logic_error{
    public:
       BancoExcecao(const char *e) : logic_error(e) {}
};

#endif
