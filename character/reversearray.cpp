#include <iostream>
using namespace std;
#include <cstring>

void twoPointer(char arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    char arr[5] = "code";
    int n = strlen(arr);
    twoPointer(arr, n);
    cout << "Reversed Array is : " << arr << endl;
    return 0;
}