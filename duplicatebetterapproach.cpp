#include <iostream>
#include <algorithm>
using namespace std;

bool dupl(int *nums, int n) {
    sort(nums, nums + n);   // pehle sort karo
    
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i+1]) {
            return true;
        }
    }
    
    return false;
}

int main(){
    int nums[] = {1,2,3,4};
    int n = sizeof(nums) / sizeof(int);
    cout << boolalpha << dupl(nums, n) << endl;
    return 0;
}