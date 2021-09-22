//
// Created by wakaztahir on 9/22/2021.
//
#include "twosum.h"
#include <utility>

/**
 * It finds indices of two numbers in the array [numbers] that sum to [target]
 * @param numbers : array of numbers
 * @param size : size of array [numbers]
 * @param target : target sum of two numbers
 * @return : pair of pointers to indices of two numbers , -1,-1 if no solution found
 */
std::pair<int, int> find_two_sum(const int numbers[], int size, int target) {
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int number_to_find = target - numbers[i];
            if (numbers[j] == number_to_find) {
                index1 = i;
                index2 = j;
            }
        }
    }


    return std::make_pair(index1, index2);
}