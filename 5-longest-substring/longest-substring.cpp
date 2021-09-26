//
// Created by wakaztahir on 9/26/2021.
//

#include "longest-substring.h"
#include <vector>

int lengthOfLongestSubstring(std::string s) {
    int longest = 0;
    for (int i = 0; i < s.size(); i++) {
        std::vector<char> unique;
        for (int j=i;j<s.size();j++){
            bool found = false;
            for(int k=0;k<unique.size();k++){
                if(unique[k]==s[j]){
                    found = true;
                    break;
                }
            }
            if(!found){
                unique.push_back(s[j]);
            }else{
                break;
            }
        }
        if(unique.size()>longest){
            longest = unique.size();
        }
    }
    return longest;
}
