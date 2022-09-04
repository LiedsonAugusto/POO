#ifndef FILA_H
#define FILA_H

#include <iostream>
#include "ExcecaoFila.h"

template <class tipo>
class Fila{
  public:
    Fila(int = 10);
    ~Fila();
    bool estaVazia() const {return this->primeiro == this->ultimo;}
bool estaCheia() const {return this->ultimo - this->primeiro == tamFila;}

  void adicionarItem(const tipo &);
  void removerItem();

  private:
    tipo *fila;
    int primeiro, ultimo, tamFila;
};

template <class tipo>
Fila<tipo>::Fila(int tam) : primeiro(0), ultimo(0), tamFila(tam){
  fila = new tipo[this->tamFila];
}

template <class tipo>
Fila<tipo>::~Fila(){
  if (fila){
    delete [] fila;
  }
}

template <class tipo>
void Fila<tipo>::adicionarItem(const tipo &item){
  if(estaCheia())
    throw ExcecaoFila("Fila cheia!");

  fila[ultimo % tamFila] = item;
  ultimo++;

}

template <class tipo>
void Fila<tipo>::removerItem(){
  if (estaVazia())
    throw ExcecaoFila("Fila vazia!");

  primeiro++;
}

#endif