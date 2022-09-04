#include <iostream>
#include "Array.h"

using std::cout;
using std::cin;

int main() {

  Array<int> a1(7);  //array de 7 elementos
  Array<int> a2(a1);     //array de 10 elementos

  cout << a1;
  
  cin >> a1;    //lendo array 

  cout << a1;   //escrevendo array

  if (a1 == a2)
    cout << "a1 e a2 são iguais";

  Array<int> a3(a1);

  a3[5] = 100; //invoca int &operator[](int)

  cout << "a3[5] == " << a3[5] << std::endl;  //int operator[](int) const

  a2 = a3;

  cout << "a2[5] == " << a3[5] << std::endl;

  a2[100] = 50;
  
}