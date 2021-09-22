#include <iostream>
#include "1-twosum/twosum.h"

int main() {

    std::vector<int> vect{1, 2, 3, 4, 5};
    auto indices = find_two_sum(vect, 23);

    if (indices.size() < 2) {
        std::cout << "No solution found";
    } else {
        std::cout << indices[0] << " " << indices[1];
    }
    return 0;
}