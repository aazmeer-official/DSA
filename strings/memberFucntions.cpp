#include <iostream>
using namespace std;

int main()
{
    string str = "apna College!";
    str.at(3);
    str[3];
    cout << str.substr(1, 3);
    cout << str.find("ege", 5);
    return 0;
}