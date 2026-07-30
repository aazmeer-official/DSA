#include <iostream>
using namespace std;

void print(int *arr, int n ){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    
}

void selectionSort( int *arr , int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIdx = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
            
        }
        swap(arr[minIdx], arr[i]);
    }
    print(arr, 5);
}

int main(){
    int arr[5] = {5,1,4,2,3};
    selectionSort(arr, 5);
    return 0;
}