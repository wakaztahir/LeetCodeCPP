//
// Created by wakaztahir on 9/28/2021.
//

#include "valid-palindrome.h"
#include <regex>

bool isPalindrome(std::string s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool isValidPalindrome(std::string s) {
    auto reg = std::regex("[^A-Za-z0-9]");
    s = std::regex_replace(s, reg, "");
    std::for_each(s.begin(), s.end(), [](char &c) {
        c = std::tolower(c);
    });
    return isPalindrome(s, 0, s.size() - 1);
}

bool isAlmostPalindrome(std::string s) {
    auto reg = std::regex("[^A-Za-z0-9]");
    s = std::regex_replace(s, reg, "");
    std::for_each(s.begin(), s.end(), [](char &c) {
        c = std::tolower(c);
    });
    int left = 0;
    int right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
        }
        left++;
        right--;
    }
    return true;
}
