//
// Created by wakaztahir on 10/2/2021.
//

#ifndef INTERVIEWPREP_MULTI_LEVEL_DOUBLY_H
#define INTERVIEWPREP_MULTI_LEVEL_DOUBLY_H

class Node {
public:
    int val;
    Node *prev;
    Node *next;
    Node *child;
};

/**
 * Flattens a multi level doubly linked list
 * \LeetCode https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/submissions/
 * @param head head of the multi level doubly linked list
 * @return head of flattened node
 */
Node *flatten(Node *head);

#endif //INTERVIEWPREP_MULTI_LEVEL_DOUBLY_H
