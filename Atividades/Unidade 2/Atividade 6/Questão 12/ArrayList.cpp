#include <iostream>
using std::cout;
using std::endl;

#include "ArrayList.h"

void somaArray(ArrayList &array, int num){
  for (auto i = 0; i < array.pos; i++)
    array.arr[i] += num;
}

void subArray(ArrayList &array, int num){
  for (auto i = 0; i < array.pos; i++)
    array.arr[i] -= num;
}

void mulArray(ArrayList &array, int num){
  for (auto i = 0; i < array.pos; i++)
    array.arr[i] *= num;
}

void divArray(ArrayList &array, int num){
  for (auto i = 0; i < array.pos; i++)
    array.arr[i] = array.arr[i]/num;
}

ArrayList::ArrayList(int tam) : pos(0)
  {
    if (tam > 0)
    {
      this->tam = tam;
      arr = new int[tam];
    }
    else
    {
      arr = nullptr;
      this->tam = 0;
    }
  }

  ArrayList::~ArrayList()
  {
    if (arr)
      delete [] arr;
  }

  ArrayList &ArrayList::add(int v)
  {
    if (pos < tam)
      arr[pos++] = v;
    
    return *this;
  }

  void ArrayList::print() const
  {
    for (int i = 0 ; i < pos ; i++)
      std::cout << arr[i] << " ";
    std::cout << std::endl;
  }

  int ArrayList::busca(int indice) const {
    if (indice < pos){
      for (auto i = 0; i < tam; i++){
        if (i == indice)
          return arr[i];
      }
    }
    return 0;
  }

  void ArrayList::remove(int indice) {
    if (indice < pos){
      std::cout << "Número insuficente da lista";
    }
    for (auto i = 0; i < tam; i++){
      if (indice == i){
        for (auto a = i; a < tam; a++){
          arr[a] = arr[a + 1];
        }
      }
    }
    pos -= 1;
  }

  void ArrayList::removeEl(int elemento) {
    int contador = 0;
    for (auto i = 0; i < pos; i++){
      if (arr[i]==elemento){
        contador += 1;
        for (auto a = i; a < pos; a++)
          arr[a] = arr[a+1];
      }
    }
    pos = pos - contador;
  }