//
// Created by wakaztahir on 9/28/2021.
//

#include <string>

#ifndef INTERVIEWPREP_VALID_PALINDROME_H
#define INTERVIEWPREP_VALID_PALINDROME_H

/**
 * Returns true if valid palindrome , false if not
 * @param s : the string
 * @return true or false if palindrome or not
 */
bool isValidPalindrome(std::string s);

/**
 * Checks if string is palindrome or if it is not
 * and it can become a palindrome by removing just one character
 * returns true otherwise false
 * @param s : the string
 * @return true or false if almost palindrome or not
 */
bool isAlmostPalindrome(std::string s);

#endif //INTERVIEWPREP_VALID_PALINDROME_H
