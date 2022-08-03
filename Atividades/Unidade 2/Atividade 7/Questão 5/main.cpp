#include <iostream>
#include "Array.hpp"

using std::cin;
using std::cout;

int main() {
  Array a1(3);
  Array a2(3);

  cin >> a1;
  cin >> a2;

  Array a3 = a1+a2;

  cout << a3;

  Array a4(3);

  cin >> a4;

  a4 += a1;
  
  cout << a4;
}