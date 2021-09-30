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

ListNode *reverseList(ListNode *head, int left, int right) {
    auto current = head;
    ListNode *start = head;
    int position = 1;
    while (position < left) {
        auto next = current->next;
        start = current;
        current = next;
        position++;
    }
    ListNode *newList = nullptr;
    ListNode *tail = current;
    while (position >= left && position <= right) {
        // reversing
        auto next = current->next;
        current->next = newList;
        newList = current;
        current = next;
        position++;
    }
    start->next = newList;
    tail->next = current;
    if(left>1) {
        return head;
    }else{
        return newList;
    }
}