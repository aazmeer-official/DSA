#include <iostream>
using namespace std;
#include <climits>

void trap (int *heights, int n ){
    int leftMax[20000];
    int maximum = 0;
    leftMax[0] = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        maximum = max(leftMax[i-1],heights[i-1]);
        leftMax[i] = maximum;
        cout << leftMax[i] ;
    }

    
} 

int main(){
    int height[8] = {4,2,0,6,0,3,2,5};
    int n = sizeof(height) / sizeof(int);
    trap(height,n);
    return 0;
}