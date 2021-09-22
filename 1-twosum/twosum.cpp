//
// Created by wakaztahir on 9/22/2021.
//
#include "twosum.h"

/**
 * It finds indices of two numbers in the array [numbers] that sum to [target]
 * @param nums : vector of numbers
 * @param target : target sum of two numbers
 * @return : vector containing indices or maybe not if no solution found
 */
std::vector<int> find_two_sum(std::vector<int> &nums, int target) {

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            int number_to_find = target - nums[i];
            if (nums[j] == number_to_find) {
                return std::vector<int>{i, j};
            }
        }
    }

    return std::vector<int>{};
}