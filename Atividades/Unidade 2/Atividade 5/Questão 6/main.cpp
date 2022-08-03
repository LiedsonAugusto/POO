#include <iostream>
#include "Time.h"
using std::endl;

int main() {
    Time hora1(23, 59, 59);
    Time hora2(11, 50, 59);
    Time hora3(11, 59, 59);
    hora1.tick();
    hora2.tick();
    hora3.tick();
    hora1.printUniversal();
    std::cout << endl;
    hora2.printUniversal();
    std::cout << endl;
    hora3.printUniversal();
    return 0;
}