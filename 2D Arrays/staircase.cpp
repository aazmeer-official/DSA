#include <iostream>
using namespace std;

void matrixSearch(int matrix[][4], int n , int m , int key){
    int i = 0; 
    int j = m-1;

    while (i < n && j >=0)
    {
        if (matrix[i][j] == key) {
            cout << "Found at (" << i << ", " << j << ")";
            return;
        }
        if (matrix[i][j] > key )
        {
            j--;
        }
        else if (matrix[i][j] < key)
        {
            i++;
        }

    }
    cout << "Not FOund";
}


int main(){
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
     matrixSearch(matrix, 4,4, 16);
    return 0;
}