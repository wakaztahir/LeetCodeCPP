//
// Created by wakaztahir on 9/24/2021.
//

#include <unordered_map>
#include "rainwater.h"

int trap_rain_water(std::vector<int> &height) {
    auto maxLR = std::unordered_map<int, std::pair<int, int>>();

    int maxL = 0;
    bool firstFound = false;
    // Finding maxL
    for (int i = 0; i < height.size(); i++) {
        if (height[i] < maxL) {
            firstFound = true;
            maxLR.insert_or_assign(i, std::pair<int, int>(maxL, 0));
        } else if (height[i] >= maxL) {
            maxL = height[i];
            if (firstFound) {
                maxLR.insert_or_assign(i, std::pair<int, int>(maxL, 0));
            } else {
                maxLR.insert_or_assign(i, std::pair<int, int>(0, 0));
            }
        }
    }

    // Finding maxR
    int maxR = 0;
    firstFound = false;
    for (int i = height.size() - 1; i > -1; i--) {
        if (height[i] < maxR) {
            firstFound = true;
            maxLR[i].second = maxR;
        } else if (height[i] >= maxR) {
            maxR = height[i];
            if (firstFound) {
                maxLR[i].second = maxR;
            } else {
                maxLR[i].second = 0;
            }
        }
    }

    int total = 0;
    for (int i = 0; i < height.size(); i++) {
        int currentWater = std::min(maxLR[i].first, maxLR[i].second) - height[i];
        total += currentWater > -1 ? currentWater : 0;
    }
    return total;
}
