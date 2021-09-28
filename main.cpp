#include <iostream>
#include "6-valid-palindrome/valid-palindrome.h"
#include <regex>

auto check = [](bool x) {
    if (!x) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
};

int main() {
    check(isValidPalindrome(""));
    check(isValidPalindrome("a"));
    check(isValidPalindrome("aba"));
    check(isValidPalindrome("aca"));
    check(isValidPalindrome("abba"));
    check(!isValidPalindrome("abcdef"));
    check(isValidPalindrome("abbdedbba"));
    check(isValidPalindrome("Canalanac"));
    check(isAlmostPalindrome("Canalanaxc"));
    return 0;
}