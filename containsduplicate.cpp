#include <iostream>
using namespace std;

bool dupl(int *nums , int n) {
    for (int i = 0; i < n; i++)
    {
        for(int k = i+1; k < n; k++){
            if (nums[i] == nums[k])
            {
                return true;
            }
            
        }
    }

    return false;
    
}

int main(){
    int nums[] = {1,2,3,4};
    int n = sizeof(nums) / sizeof(int);
    cout << dupl(nums,n);
    return 0;
}