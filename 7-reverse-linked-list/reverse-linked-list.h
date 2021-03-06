//
// Created by wakaztahir on 9/30/2021.
//

#ifndef INTERVIEWPREP_REVERSE_LINKED_LIST_H
#define INTERVIEWPREP_REVERSE_LINKED_LIST_H

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/**
 * \LeetCode https://leetcode.com/problems/reverse-linked-list/
 * @param head , head of linked list
 * @return reversed linked list
 */
ListNode *reverseList(ListNode *head);

/**
 * \LeetCode https://leetcode.com/problems/reverse-linked-list-ii/
 * @param head , head of linked list
 * @param left , start of reversal
 * @param right , end of reversal
 * @return linked list with values from left to right reversed
 */
ListNode *reverseList(ListNode *head,int left,int right);

#endif //INTERVIEWPREP_REVERSE_LINKED_LIST_H
