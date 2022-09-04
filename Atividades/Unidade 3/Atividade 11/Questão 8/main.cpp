#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Pilha.h"

int main() {
  try{
    Pilha<int> pi(3);
    int popEli;
    pi.push(10);
    pi.push(20);
    pi.push(30);
    pi.push(40);
    pi.pop(popEli);
  } catch (PilhaCheiaErro &e){
    cout << e.what() << endl;
  } catch(PilhaVaziaErro &e){
    cout << e.what() << endl;
  }


  return 0;
}