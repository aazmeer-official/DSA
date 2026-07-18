#include <iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0 ; i<n; i++){
    cout << *(arr+i) << "\n";
    
 }   
}

int main(){
 int arr [] = { 1,2,4,5,67};
 int n = sizeof(arr) / sizeof(int);
 printArr(arr,n);
 return 0;
}