#include <iostream>

template <class Tipo>
bool toEquals(const Tipo &a1, const Tipo &a2){
  return a1 == a2;
}

int main() {
  std::cout << toEquals(1, 2);
  return 0;
}