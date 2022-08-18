#ifndef CONTACOMLIMITEEXCECAO_H
#define CONTACOMLIMITEEXCECAO_H

#include <stdexcept>

class ContaComLimiteExcecao : public std::logic_error {
    public:
        explicit ContaComLimiteExcecao(const char *e) : logic_error(e) {}
};

#endif