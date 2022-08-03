#include <iostream>
#include "IntegerSet.hpp"

int main() {
  int array[4] = {1, 2, 5, 7};
  int array2[4] = {1, 2, 3, 7};
  IntegerSet pessoa1(array, 4);
  IntegerSet pessoa2(array2, 4);

  pessoa1 << 3;
  pessoa1 >> 2;

  IntegerSet pessoa3 = pessoa1 & pessoa2;
  pessoa3.print();
}