#include <iostream>
#include "2-container-water/container-water.h"

int main() {

    std::vector<int> vect{7,1,2,3,9};
    auto area = maxContainerArea(vect);
    std::cout << area;
    return 0;
}