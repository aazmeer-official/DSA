#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char arr[30];
    cin.getline(arr, 30, '*');
    cout << "Your Word was : " << arr << endl;
    cout << "Length of the word is : " << strlen(arr) << endl;
    return 0;
}