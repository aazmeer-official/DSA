#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char arr[] = "baNanA6354634";
    int n = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
    cout << "Uppercase Array is : " << arr << endl;
    return 0;
}