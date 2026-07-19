#include <iostream>
using namespace std;

int printSubarrays(int *arr, int n){
    int maxValue = INT8_MIN;
    for(int start=0; start < n ; start ++ ){ //takles group
        int total = 0;
        for (int end = start ; end < n ; end ++){ //takles row
                total += arr[end];
                maxValue = max(maxValue,total);
        }
    }
    cout << maxValue;
    
}


int main(){
    int arr[5] = {1,2,3,4,-5};
    int n = sizeof(arr) / sizeof(int);

    printSubarrays(arr, n );
    return 0;
}