#include <iostream>
using namespace std;

void kadane (int *arr , int n) {
    int total = 0;
    int maxValue = INT8_MIN;
    for ( int i = 0; i < n; i++)
    {
        total += arr[i] ;
        maxValue = max(maxValue, total);

        if (total<0)
        {
            total=0;
        }
        
    }
    cout << maxValue ;
}

int main(){
    
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    kadane(arr, n);
    return 0;
}