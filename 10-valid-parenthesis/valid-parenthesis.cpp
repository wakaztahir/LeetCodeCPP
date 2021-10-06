//
// Created by wakaztahir on 10/5/2021.
//

#include "valid-parenthesis.h"
#include <stack>
#include <unordered_map>

bool isValid(std::string s) {
    std::stack<char> container;

    for (int i = 0; i < s.length(); i++) {
        switch (s[i]) {
            case '(':
            case '{':
            case '[':
                container.push(s[i]);
                break;
            case ')':
                if (!container.empty() && container.top() == '(') {
                    container.pop();
                    break;
                } else return false;
            case '}':
                if (!container.empty() && container.top() == '{') {
                    container.pop();
                    break;
                } else return false;
            case ']':
                if (!container.empty() && container.top() == '[') {
                    container.pop();
                    break;
                } else return false;
        }
    }
    return container.empty();
}

std::vector<std::string> removeInvalidParentheses(std::string s) {
    std::stack<int> stack;

    // Left To Right

    std::string left[s.size()];
    for (int i = 0; i < s.size(); i++) {
        left[i] = s[i];
        switch (s[i]) {
            case '(':
                stack.push(i);
                break;
            case ')':
                if (!stack.empty()) {
                    stack.pop();
                } else {
                    left[i] = "";
                }
                break;
        }
    }
    while (!stack.empty()) {
        left[stack.top()] = "";
        stack.pop();
    }

    // Right To Left

    std::string right[s.size()];
    for (int i = s.size() - 1; i > -1; i--) {
        right[i] = s[i];
        switch (s[i]) {
            case ')':
                stack.push(i);
                break;
            case '(':
                if (!stack.empty()) {
                    stack.pop();
                } else {
                    right[i] = "";
                }
                break;
        }
    }
    while (!stack.empty()) {
        right[stack.top()] = "";
        stack.pop();
    }

    // Returning Possibilities

    std::vector<std::string> ret{};

    // Joining two strings

    std::string leftString = "";
    std::string rightString = "";
    for (int i = 0; i < s.size(); ++i) {
        leftString += left[i];
    }
    for (int i = 0; i < s.size(); ++i) {
        rightString += right[i];
    }

    if (leftString != s) {
        ret.push_back(leftString);
    }
    if (rightString != s) {
        ret.push_back(rightString);
    }

    return ret;
}