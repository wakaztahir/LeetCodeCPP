#include <iostream>
#include "3-rainwater/rainwater.h"

int main() {

    std::vector<int> vect{1,2,3,4,5};
    auto area = trap_rain_water(vect);
    std::cout << area;
    return 0;
}