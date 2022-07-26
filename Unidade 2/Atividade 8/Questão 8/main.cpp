#include <iostream>
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

using std::cout;

int main() {
  Pessoa p1("abel");
  PessoaFisica p2("lied", "0000");
  PessoaJuridica p3("aaa", "pj", "a", "b");

  
  cout << p1 << std::endl;
  cout << p2 << std::endl;
  cout << p3 << std::endl;
}