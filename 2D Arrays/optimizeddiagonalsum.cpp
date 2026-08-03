#include <iostream>
using namespace std;

void diagonalSum(int martrix[][4], int n , int m) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+= martrix[i][i];
        int j = n-i-1;
        if (i !=  j)
        {
            sum+= martrix[i][j];
        }
        
    }
    cout << sum ;
}


int main(){
        int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    diagonalSum(matrix,4,4);
    return 0;
}