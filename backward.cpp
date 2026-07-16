#include <iostream>
using namespace std;

void printArr(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
}


int main (){
    int Arr[5] = {1,3,4,5,6};
    int n = sizeof(Arr) / sizeof(int);
    int start = 0, end = n-1;


    while (start < end){
        swap(Arr[start],Arr[end]);
        start++;
        end--;
    }
    printArr(Arr,n);
    return 0;
}