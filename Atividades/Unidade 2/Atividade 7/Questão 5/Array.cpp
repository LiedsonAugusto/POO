#include <iostream>
using std::cerr;
using std::endl;

#include "Array.hpp"

Array operator+(const Array &a1, const Array &a2){
  int tam3 = a1.tam + a2.tam;
  Array a3(tam3);

  for (auto i = 0; i < a1.tam; i++){
    a3.arr[i] = a1.arr[i];
  } 

  int tamanho = a1.tam;
  
  for (auto i = 0; i < a2.tam; i++){
    a3.arr[tamanho] = a2.arr[i];
    tamanho+=1;
  } 

  return a3;
}

ostream &operator<<(ostream &out , const Array &a)
{
  for (int i = 0 ; i < a.tam ; i++)
    out << a.arr[i] << " ";
  
  out << endl;

  return out;
}

istream &operator>>(istream &inp, Array &a)
{
  for (int i = 0 ; i < a.tam ; i++)
    inp >> a.arr[i];
  
  return inp;
}

Array::Array(int tam)
{
  this->tam = (tam > 0 ? tam : 10);

  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = 0;
}

Array::Array(const Array &obj) : tam(obj.tam)
{
  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = obj.arr[i];
}

Array::~Array()
{
  delete [] arr;
}

int Array::getSize() const
{
  return tam;
}

const Array &Array::operator=(const Array &obj)
{
  if (&obj != this) // evita auto-atribuição
  {
    if (this->tam != obj.tam)
    {
      delete [] this->arr;
      this->tam = obj.tam;
      this->arr = new int[this->tam];
    }

    for (int i = 0 ; i < this->tam ; i++)
      arr[i] = obj.arr[i];

  }

  return *this;
}

bool Array::operator==(const Array &obj) const
{
  if (this->tam != obj.tam)
    return false;

  for (int i = 0 ; i < this->tam ; i++)
    if (arr[i] != obj.arr[i])
      return false;
  
  return true;
}

int &Array::operator[](int i)
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}

int Array::operator[](int i) const
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}

const Array &Array::operator+=( const Array &a ){

  if (this->arr){
      
    int tamanhoOriginal = this->tam;
    int arrayTemp[tamanhoOriginal];
  
    for (auto i = 0; i < tamanhoOriginal; i++){
      arrayTemp[i] = this->arr[i];
    }
      
    delete [] this->arr;
      
    this->arr = new int[tamanhoOriginal + a.tam];
    this->tam += a.tam;
  
    for (auto i = 0; i < tamanhoOriginal; i++){
      this->arr[i] = arrayTemp[i];
    }
  
    for (auto i = 0; i < a.tam; i++){
      this->arr[tamanhoOriginal] = a.arr[i];
      tamanhoOriginal += 1;
    }
  
      
  } else {
      
    this->arr = new int[a.tam];
    this->tam = a.tam;
    for (auto i = 0; a.tam; i++){
      this->arr[i] = a.arr[i];
    }
  }

  return *this;
}