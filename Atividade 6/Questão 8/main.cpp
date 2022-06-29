#include <iostream>
#include "Pessoa.h"

int main() {
    
    Pessoa pessoa1;
    Pessoa pessoa2("Liedson", 18, 1.75);

    pessoa1.setNome("Fabricio").setIdade(21).setAltura(1.89);

    std::cout << pessoa1.getNome() << " " << pessoa1.getIdade() << " " << pessoa1.getAltura() << std::endl;

    std::cout << pessoa2.getNome() << " " << pessoa2.getIdade() << " " << pessoa2.getAltura() << std::endl;

    return 0;
}
