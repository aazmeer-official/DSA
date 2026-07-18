#include <iostream>
using namespace std;

int printSubarrays(int *arr, int n , int*array, int x){
    int s = -1;
    for(int start=0; start < n ; start ++ ){
        for (int end = start ; end < n ; end ++){
            // cout << " ( " << start << "," << end << ")  " ;
            int total = 0;
            for (int i = start ; i <= end ; i ++ ){
                total = arr[i] + total;
                
            }
            s++;
            // cout << s;
            array[s] = total ;

            // cout << ", ";
        }
            
    }
    // cout << array[2];
    int max = array[0];
    for(int i = 0; i< x; i++ ){ 
        if (max<array[i])
        {
            max = array[i];
        }
    }
    cout << max;
}


int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    int x = (n * (n+1)) /2;
    int array[x];

    printSubarrays(arr, n , array, x);
    return 0;
}