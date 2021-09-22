#include <iostream>
#include "1-twosum/twosum.h"

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    auto indices = find_two_sum(arr, sizeof arr, 24);

    if(indices.first == -1 || indices.second == -1) {
        std::cout << "Solution not found";
    }else {
        std::cout << indices.first << "\n" << indices.second;
    }
    return 0;
}