//
// Created by wakaztahir on 9/26/2021.
//

#include <iostream>
#include "longest-substring.h"
#include "unordered_map"

int lengthOfLongestSubstring(std::string s) {
    std::unordered_map<char, int> seen;
    int left = 0;
    int longest = 0;
    for (int right = 0; right < s.size(); right++) {
        char current = s[right];
        int previousSeen = -1;
        if (seen.find(current) != seen.end()) {
            previousSeen = seen[current];
        }
        if (previousSeen >= left) {
            left = previousSeen + 1;
        }
        seen[current] = right;
        longest = std::max(longest, right - left + 1);
    }
    return longest;
}
