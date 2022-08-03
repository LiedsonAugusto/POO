#include <iostream>
using std::cout;
using std::endl;

#include "Complex.hpp"

//implementações das funções friend
//mote que elas não pertencem ao escopo da classe

Complex soma(const Complex &c1, const Complex &c2)
{
  Complex res;
  res.real = c1.real + c2.real;
  res.imaginaria = c1.imaginaria + c2.imaginaria; 
  return res;
}

Complex sub(const Complex &c1, const Complex &c2)
{
  Complex res;
  res.real = c1.real - c2.real;
  res.imaginaria = c1.imaginaria - c2.imaginaria; 
  return res;
}

ostream &operator<<(ostream &out, const Complex &comp){
  
  out <<"Parte Real: " << comp.real << std::endl;
  out <<"Parte Imaginária: " << comp.imaginaria << std::endl;
  
  return out;
}

//demais métodos

void Complex::print() const
{
  cout << real << (imaginaria >= 0 ? " +" : " ") << imaginaria << "*i" << endl;
}

const Complex Complex::operator+(const Complex &comp){
  Complex objt3;
  objt3.real = this->real + comp.real;
  objt3.imaginaria = this->imaginaria + comp.imaginaria;
  return objt3;
}

const Complex &Complex::operator+=(const Complex &comp){

  double newReal = this->real + comp.real;
  double newImaginaria = this->imaginaria + comp.imaginaria;

  this->real = newReal;
  this->imaginaria = newImaginaria;
  return *this;
}

const Complex Complex::operator-(const Complex &comp){
  Complex objt3;
  objt3.real = this->real - comp.real;
  objt3.imaginaria = this->imaginaria - comp.imaginaria;
  return objt3;
}

const Complex &Complex::operator-=(const Complex &comp){

  double newReal = this->real - comp.real;
  double newImaginaria = this->imaginaria - comp.imaginaria;

  this->real = newReal;
  this->imaginaria = newImaginaria;
  return *this;
}

Complex &Complex::operator++(){
  this->real++;
  return *this;
}

Complex Complex::operator++(int){
  Complex temp = *this;
  temp.real++;
  return temp;
}

Complex &Complex::operator--(){
  this->real--;
  return *this;
}

Complex Complex::operator--(int){
  Complex temp = *this;
  temp.real--;
  return temp;
}