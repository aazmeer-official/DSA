#include <iostream>
using namespace std;

int binarySearch(int matrix[][4], int n , int m , int key){
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = m-1;
        int found = false;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (matrix[i][mid] == key)
            {
                found = true;
                cout << i << "*" << mid; 
                break;
            }
            else if (matrix[i][mid] < key)
            {
                start = mid+1;
            }
            else if (matrix[i][mid] > key ){
                end = mid -1 ;
            } 
        }
    }
    
}

int main(){
     int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
     binarySearch(matrix, 4,4, 11);
    return 0;
}