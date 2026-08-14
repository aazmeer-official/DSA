#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char str1[100];
    char str2[100] = "Hello, World!";
    strcpy(str1, str2);
    cout << str1 << endl;
    return 0;
}