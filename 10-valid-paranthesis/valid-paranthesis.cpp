//
// Created by wakaztahir on 10/5/2021.
//

#include "valid-paranthesis.h"
#include <stack>

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
                    container.pop();break;
                }
                else return false;
            case '}':
                if (!container.empty() && container.top() == '{') {
                    container.pop();
                    break;
                }
                else return false;
            case ']':
                if (!container.empty() && container.top() == '[') {
                    container.pop();
                    break;
                }
                else return false;

        }
    }
    return container.empty();
}
