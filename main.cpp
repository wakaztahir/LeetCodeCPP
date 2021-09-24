#include <iostream>
#include "2-container-water/container-water.h"

int main() {

    std::vector<int> vect{1,2,3,4,5};
    auto area = maxContainerArea(vect);
    std::cout << area;
    // watch 16
    return 0;
}