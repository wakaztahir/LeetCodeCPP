//
// Created by wakaztahir on 9/24/2021.
//

#include "rainwater.h"

int trap_rain_water(std::vector<int> &height) {
    int total = 0;
    for (int i = 0; i < height.size(); i++) {
        int maxL = 0;
        int maxR = 0;
        for (int j = i - 1; j > -1; j--) {
            if (height[j] > maxL) {
                maxL = height[j];
            }
        }
        for (int k = i + 1; k < height.size(); k++) {
            if (height[k] > maxR) {
                maxR = height[k];
            }
        }
        int currentWater = std::min(maxL, maxR) - height[i];
        total += currentWater > -1 ? currentWater : 0;
    }
    return total;
}
