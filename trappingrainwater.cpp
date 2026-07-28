#include <iostream>
using namespace std;

void trap(int *heights, int n) {
    int leftMax[20000];
    int rightMax[20000];

    // Left max
    leftMax[0] = heights[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
    }

    // Right max
    rightMax[n - 1] = heights[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], heights[i+1]); 
    }

    // Water calculation
    int waterTrapped = 0;
    for (int i = 0; i < n; i++) {
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];
        if (currWater > 0) {
            waterTrapped += currWater;
        }
    }

    cout << waterTrapped;
}

int main() {
    int height[8] = {4,2,0,6,3,2,5};
    int n = sizeof(height) / sizeof(int);
    trap(height, n);
    return 0;
}