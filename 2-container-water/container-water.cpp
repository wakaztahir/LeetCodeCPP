//
// Created by wakaztahir on 9/23/2021.
//

#include "container-water.h"

int maxContainerArea(std::vector<int> &height) {
    int maxArea = 0;
    for(int i=0;i<height.size();i++){
        for(int j=i+1;j<height.size();j++){
            int newArea = std::min(height[i],height[j]) * (j - i);
            if(newArea > maxArea){
                maxArea = newArea;
            }
        }
    }
    return maxArea;
}
