//
// Created by wakaztahir on 9/23/2021.
//

#include "container-water.h"

int maxContainerArea(std::vector<int> &height) {
    int p1 = 0;
    int p2 = height.size() - 1;
    int maxArea = 0;
    while(p1 < p2){
        int h = std::min(height[p1],height[p2]);
        int width = p2 - p1;
        maxArea = std::max(maxArea,(width * h));
        if(height[p1]<=height[p2]){
            p1++;
        }else{
            p2--;
        }
    }
    return maxArea;
}
