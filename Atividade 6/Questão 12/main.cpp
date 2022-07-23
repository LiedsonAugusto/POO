#include <iostream>
#include "ArrayList.h"

int main() {

  ArrayList array(5);
  array.add(1).add(2).add(3).add(4).add(5);
  somaArray(array, 3);
  subArray(array, 1);
  mulArray(array, 2);
  divArray(array, 2);
  array.print();
    
}