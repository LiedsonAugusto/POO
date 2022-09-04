#ifndef PILHA_H
#define PILHA_H

#include "PilhaCheiaErro.h"
#include "PilhaVaziaErro.h"

template <class T> class Pilha {
public:
  Pilha(int = 10);
  ~Pilha();

  bool push(const T &);
  bool pop(T &);

  bool isEmpty() const { return pos == 0; }
  bool isFull() const { return pos == tam; }

private:
  T *pPtr;
  int pos, tam;
};

template <class T> Pilha<T>::Pilha(int tam) {
  this->tam = ((tam > 0) ? tam : 10);
  pos = 0;

  pPtr = new T[this->tam];
}

template <class T> Pilha<T>::~Pilha() { delete[] pPtr; }

template <class T> bool Pilha<T>::push(const T &el) {
  if (isFull()) {
    throw PilhaCheiaErro("Erro! pilha está cheia");
  }
  pPtr[pos++] = el;
  return true;
}

template <class T> bool Pilha<T>::pop(T &el) {
  if (isEmpty()) {
    throw PilhaCheiaErro("Erro! pilha está vazia");
  }
  el = pPtr[--pos];
  return true;
}

#endif