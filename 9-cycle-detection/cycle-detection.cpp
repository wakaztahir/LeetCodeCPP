//
// Created by wakaztahir on 10/3/2021.
//

#include "cycle-detection.h"

bool hasCycle(ListNode *head) {
    ListNode *hare = head;
    ListNode *tortoise = head;
    while (tortoise != nullptr && hare != nullptr && hare->next != nullptr) {
        hare = hare->next->next;
        tortoise = tortoise->next;
        if (hare == tortoise) return true;
    }
    return false;
}

ListNode *detectCycle(ListNode *head) {
    ListNode *hare = head;
    ListNode *tortoise = head;
    while (true) {
        if(tortoise == nullptr || hare == nullptr || hare->next == nullptr) return nullptr;
        hare = hare->next->next;
        tortoise = tortoise->next;
        if (hare == tortoise) break;
    }
    ListNode *current = head;
    while (current != tortoise) {
        current = current->next;
        tortoise = tortoise->next;
    }
    return current;
}
