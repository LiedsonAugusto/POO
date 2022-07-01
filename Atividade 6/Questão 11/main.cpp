#include <iostream>
#include "ArrayList.h"

int main() {
    ArrayList lista(5);
    lista.add(3).add(1).add(3).add(0).add(3);
    lista.removeEl(3);
    lista.print();

    return 0;
}