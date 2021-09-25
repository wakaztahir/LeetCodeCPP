//
// Created by wakaztahir on 9/25/2021.
//

#include <iostream>
#include "backspace-compare.h"

bool backspaceCompare(std::string s, std::string t) {
    std::string newString1 = "";
    std::string newString2 = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '#') {
            if (!newString1.empty()) {
                newString1.pop_back();
            }
        } else {
            newString1 += s[i];
        }
    }
    for (int j = 0; j < t.size(); j++) {
        if (t[j] == '#') {
            if (!newString2.empty()) {
                newString2.pop_back();
            }
        } else {
            newString2 += t[j];
        }
    }
    return newString1 == newString2;
}
