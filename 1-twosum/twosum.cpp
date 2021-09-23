//
// Created by wakaztahir on 9/22/2021.
//
#include "twosum.h"
#include <unordered_map>

std::vector<int> find_two_sum(std::vector<int> &nums, int target) {

    std::unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++) {
        if (map.find(nums[i]) == map.end()) {
            map.insert_or_assign(target - nums[i], i);
        } else {
            return std::vector<int>{map[nums[i]], i};
        }
    }

    return std::vector<int>{};
}