#include <iostream>
#include "Fila.h"

int main() {
  try{
    Fila<int> fila(2);
    fila.adicionarItem(10);
    fila.adicionarItem(20);
    fila.adicionarItem(30);
  } catch (ExcecaoFila &e){
    std::cout << e.what();
  }
}