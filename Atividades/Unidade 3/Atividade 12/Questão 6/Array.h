#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using std::ostream;
using std::istream;

template <class T>
class Array{
  // cout << obj
  friend ostream &operator<<( ostream &out, const Array<T> &a){
    for (int i = 0 ; i < a.tamanho ; i++)
      out << a.array[i] << " ";
  
      out << std::endl;

    return out;
  }

  // cin >> obj
  friend istream &operator>>( istream &inp, Array<T> &a){
    for (int i = 0 ; i < a.tamanho ; i++)
      inp >> a.array[i];
  
    return inp;
  }

  public:

    Array( int = 10 );    //construtor-padrão
    Array(const Array<T> &); //construtor de cópia
    ~Array();             //destrutor
  
    int getSize() const {return this->tamanho;}

    const Array<T> &operator=( const Array & ); //operador atribuição. "const Array &" evita algo como (a = b) = c

    bool operator==( const Array<T> & ) const; //operador de igualdade

    bool operator!=( const Array<T> &dir) const
    {
      return !(*this == dir);
    }

    T &operator[](int); //permite modificar o elemento
    T operator[](int) const; //não permite modificar o elemento

  private:
    T *array;
    int tamanho;
};

template <class T>
Array<T>::Array(int tam){
  this->tamanho = (tam > 0 ? tam : 10);
  array = new T[this->tamanho];
  for (int i = 0 ; i < this->tamanho ; i++)
    array[i] = 0;
}

template <class T>
Array<T>::Array(const Array<T> &obj) : tamanho(obj.tamanho){
  array = new T[this->tamanho];

  for (int i = 0 ; i < this->tamanho ; i++)
    array[i] = obj.array[i];
}

template<class T>
Array<T>::~Array()
{
  delete [] array;
}

template <class T>
const Array<T> &Array<T>::operator=(const Array<T> &obj)
{
  if (&obj != this) // evita auto-atribuição
  {
    if (this->tamanho != obj.tamanho)
    {
      delete [] this->array;
      this->tamanho = obj.tamanho;
      this->array = new T[this->tamanho];
    }

    for (int i = 0 ; i < this->tamanho ; i++)
      array[i] = obj.array[i];

  }

  return *this;
}

template <class T>
bool Array<T>::operator==(const Array<T> &obj) const
{
  if (this->tamanho != obj.tamanho)
    return false;

  for (int i = 0 ; i < this->tamanho ; i++){
    if (array[i] != obj.array[i])
      return false;
  }
  
  return true;
}

template <class T>
T &Array<T>::operator[](int i)
{
  if (i < 0 || i >= this->tamanho)
  {
    std::cout << "Erro: Indice " << i << " fora de faixa." <<     std::endl;

    exit(1);
  }

  return array[i];
}

template<class T>
T Array<T>::operator[](int i) const
{
  if (i < 0 || i >= tamanho)
  {
    std::cout << "Erro: Indice " << i << " fora de faixa." << std::endl;

    exit(1);
  }

  return array[i];
}

#endif
