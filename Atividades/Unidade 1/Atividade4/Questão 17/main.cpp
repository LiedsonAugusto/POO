#include "ContaBanco.h"


int main() {

    ContaBanco cliente1(1500.0);
    ContaBanco cliente2(0.0);

    cliente1.displaySaldo();
    cliente2.displaySaldo();

    cliente1.creditar(500.0);
    cliente2.creditar(2100.0);

    cliente1.displaySaldo();
    cliente2.displaySaldo();

    cliente1.debitar(2500.0);
    cliente2.debitar(100);

    cliente1.displaySaldo();
    cliente2.displaySaldo();

    return 0;
}