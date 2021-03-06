//
// Created by wakaztahir on 10/5/2021.
//

#include "valid-parenthesis.h"
#include <stack>
#include <queue>
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

//todo sometimes possibilities are similar , need to backtrack to find the correct possibility
std::vector<std::string> removeInvalidParentheses(std::string s) {
    std::stack<int> stack;

    auto addLeft = false;
    auto addRight = false;

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
                    addLeft = true;
                }
                break;
        }
    }
    while (!stack.empty()) {
        addLeft = true;
        left[stack.top()] = "";
        stack.pop();
    }

    // Right To Left

    std::queue<int> queue{};

    std::string right[s.size()];
    for (int i = s.size() - 1; i > -1; i--) {
        right[i] = s[i];
        switch (s[i]) {
            case ')':
                queue.push(i);
                break;
            case '(':
                if (!queue.empty()) {
                    queue.pop();
                } else {
                    right[i] = "";
                    addRight = true;
                }
                break;
        }
    }
    while (!queue.empty()) {
        addRight = true;
        right[queue.front()] = "";
        queue.pop();
    }

    // Returning Possibilities

    std::vector<std::string> ret{};

    // Joining two strings
    std::string leftString = "";
    for (int i = 0; i < s.size(); ++i) {
        leftString += left[i];
    }
    std::string rightString = "";

    for (int i = 0; i < s.size(); ++i) {
        rightString += right[i];
    }
    if(leftString==rightString){
        ret.push_back(leftString);
        return ret;
    }
    if (addLeft) {
        ret.push_back(leftString);
    }
    if (addRight) {
        ret.push_back(rightString);
    }

    return ret;
}