//
// Created by wakaztahir on 10/3/2021.
//

#ifndef INTERVIEWPREP_CYCLE_DETECTION_H
#define INTERVIEWPREP_CYCLE_DETECTION_H

struct ListNode {
    int val;
    ListNode *next;
};

/**
 * \LeetCode https://leetcode.com/problems/linked-list-cycle
 * @param head head of the linked list
 * @return true if has a cycle , false if not
 */
bool hasCycle(ListNode *head);

/**
 * \LeetCode https://leetcode.com/problems/linked-list-cycle-ii/
 * @param head head of the linked list
 * @return nullptr if does not have a cycle other wise node that starts the cycle
 */
ListNode *detectCycle(ListNode *head);

#endif //INTERVIEWPREP_CYCLE_DETECTION_H
