#include <iostream>
#include "IntegerSet.h"

int main() {
  int array[4] = {1, 2, 5, 7};
  int array2[4] = {1, 2, 3, 7};
  IntegerSet pessoa1(array, 4);
  IntegerSet pessoa2(array2, 4);
  IntegerSet pessoa3 = intersectionOfSets(pessoa1, pessoa2);
  pessoa3.print();
}