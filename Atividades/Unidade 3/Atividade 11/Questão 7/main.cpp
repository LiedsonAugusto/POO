#include <iostream>
#include "Excecao1.h"
#include "Excecao2.h"
#include "Excecao3.h"

double Divisao(int a, int b){
  if (b == 0){
    throw Excecao1("Não se divide por 0");
  }
  return a/b;
}


int main() {
  try{
   std::cout <<Divisao(4, 0); 
  } catch(Excecao1 &e){
    std::cout << e.what();
  }
    
  return 0;
}