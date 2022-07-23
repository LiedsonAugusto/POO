#include <iostream>
#include "ImovelNovo.h"
#include "ImovelVelho.h"

using std::cout;

int main() {
  ImovelNovo i1("a", 3000, 17);
  ImovelVelho i2("b", 3000, 30);
  Imovel i3("c", 2500);

  cout << i1.getPreco() << std::endl;
  cout << i2.getPreco() << std::endl;
  cout << i3.getPreco();
}