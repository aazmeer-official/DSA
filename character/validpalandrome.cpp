#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char arr[] = "racecar";
    int n = strlen(arr);
    int start = 0;
    int end = n - 1;
    bool isPalindrome = true;
    while (start < end)
        if (arr[start] != arr[end])
        {
            isPalindrome = false;
            break;
        }
        else
        {
            start++;
            end--;
        }
    if (isPalindrome)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}