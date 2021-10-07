//
// Created by wakaztahir on 10/7/2021.
//

#include "stack-queue.h"
#include <stack>

class StackQueue {

private:
    std::stack<int> in;
    std::stack<int> out;

public:
    StackQueue() {

    }

    void push(int x) {
        in.push(x);
    }

    int pop() {
        if (out.empty()) {
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
        int top = out.top();
        out.pop();
        return top;
    }

    int peek() {
        if (out.empty()) {
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }

    bool empty() {
        return in.empty() && out.empty();
    }
};
