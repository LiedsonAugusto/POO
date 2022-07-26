#include <iostream>
#include "IntegerSet.hpp"

IntegerSet unionOfSets(const IntegerSet &objt1, const IntegerSet &objt2)
{
  IntegerSet objt3;
  objt3.print();
  for(auto i = 0; i < 100; i++){
    if ((objt1.array[i] == 1) || (objt2.array[i]==1))
      objt3.array[i] = 1;
    else
      objt3.array[i] = 0;
  }
  return objt3;
}

IntegerSet intersectionOfSets(const IntegerSet &objt1, const IntegerSet &objt2)
{
  IntegerSet objt3;
  for(auto i = 0; i < 100; i++){
    if ((objt1.array[i] == 1) && (objt2.array[i]==1))
      objt3.array[i] = 1;
    else
      objt3.array[i] = 0;
  }
  return objt3;
}

IntegerSet::IntegerSet(){
  this->array = new int[100];
  for (auto i = 0; i < 100; i++)
    this->array[i] = 0;
}

IntegerSet::IntegerSet(int array[], int quantidade){
  this->array = new int[100];
  for (auto a = 0; a < quantidade; a++)
    this->array[array[a]] = 1;
}

IntegerSet::~IntegerSet(){
  if (array){
    delete [] this->array;
  }
}

void IntegerSet::insertElement(int pos) {
  this->array[pos] = 1;
}

void IntegerSet::deleteElement(int pos) {
  this->array[pos] = 0;
}

void IntegerSet::print() const {
  for (auto i = 0; i < 100; i++){
    if (this->array[i] != 0)
      std::cout << this->array[i] <<  " " << "Posição: " << i << std::endl;
  }
}

const IntegerSet &IntegerSet::operator<<(int posicao){
  this->array[posicao] = 1;

  return *this;
}

const IntegerSet &IntegerSet::operator>>(int posicao){
  this->array[posicao] = 0;

  return *this;
}

const IntegerSet IntegerSet::operator|(const IntegerSet &integer){
  IntegerSet objt3;

  for (auto i = 0; i < 100; i++){
    if ((this->array[i] == 1) || (integer.array[i]))
      objt3.array[i] = 1;
  }

  return objt3;
}

const IntegerSet IntegerSet::operator&(const IntegerSet &integer){
  IntegerSet objt3;

  for (auto i = 0; i < 100; i++){
    if ((this->array[i] == 1) && (integer.array[i]))
      objt3.array[i] = 1;
  }

  return objt3;
}