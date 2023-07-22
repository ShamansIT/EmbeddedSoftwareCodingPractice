#include <iostream>
#include "Tank.h"

int main() {
    std::cout << "Count of tanks = " << Tank::GetAliveTanks() << std::endl;

    Tank* tank1 = new Tank();
    Tank* tank2 = new Tank();
    Tank* tank3 = new Tank();

    std::cout << "Count of tanks = " << Tank::GetAliveTanks() << std::endl;

    delete tank1;
    tank1 = nullptr;

    std::cout << "Count of tanks = " << Tank::GetAliveTanks() << std::endl;

    delete tank3;
    tank3 = nullptr;

    std::cout << "Count of tanks = " << Tank::GetAliveTanks() << std::endl;

    delete tank2;
    tank2 = nullptr;

    std::cout << "Count of tanks = " << Tank::GetAliveTanks() << std::endl;

    return 0;
}
