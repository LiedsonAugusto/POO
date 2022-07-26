#include <iostream>
using std::cout;

#include "Complex.hpp"

int main() {

  Complex c1(10,5), c2(5,-5), res;

  Complex c3 = c1 + c2;

  cout << c3;

  c3 += c1;

  cout << c3;

  Complex c4 = c1 - c2;

  cout << c4;

  c4 -= c2;

  cout << c4;

  cout << c4++;

  cout << c3--;

  return 0;
}