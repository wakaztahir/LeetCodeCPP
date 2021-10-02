//
// Created by wakaztahir on 10/2/2021.
//

#include "multi-level-doubly.h"
#include <vector>

Node *flatten(Node *head) {
    Node *current = head;
    std::vector<Node *> tempNext{};
    while (current != nullptr) {
        if (current->child != nullptr) {
            if (current->next != nullptr) {
                tempNext.push_back(current->next);
            }
            current->next = current->child;
            current->child->prev = current;
            current->child = nullptr;
        }
        if (current->next == nullptr && tempNext.size() > 0) {
            auto last = tempNext[tempNext.size() - 1];
            current->next = last;
            last->prev = current;
            tempNext.pop_back();
        }
        current = current->next;
    }
    return head;
}
