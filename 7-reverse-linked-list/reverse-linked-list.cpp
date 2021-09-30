//
// Created by wakaztahir on 9/30/2021.
//

#include "reverse-linked-list.h"

ListNode *reverseList(ListNode *head) {
    ListNode *previous = nullptr;
    ListNode *next = head;
    while (next != nullptr) {
        ListNode *tempNext = next->next;
        next->next = previous;
        previous = next;
        next = tempNext;
    }
    return previous;
}
