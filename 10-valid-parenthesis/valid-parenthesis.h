//
// Created by wakaztahir on 10/5/2021.
//

#ifndef INTERVIEWPREP_VALID_PARENTHESIS_H
#define INTERVIEWPREP_VALID_PARENTHESIS_H

#include <string>
#include <vector>

/**
 * \LeetCode https://leetcode.com/problems/valid-parentheses/submissions/
 * @param s string containing brackets : (,{,[ or ),},]
 * @return true or false depending upon validity of string
 */
bool isValid(std::string s);

/**
 * \LeetCode https://leetcode.com/problems/remove-invalid-parentheses/
 * @param s string containing parenthesis : (, or ) & lowercase chars a-z
 * @return vector containing all the possible corrections after removing minimum invalid brackets
 */
std::vector<std::string> removeInvalidParentheses(std::string s);

#endif //INTERVIEWPREP_VALID_PARENTHESIS_H
