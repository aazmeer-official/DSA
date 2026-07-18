#include <iostream>
using namespace std;

int main(){
    int arr[20] = {4,6,7,8,9,10,4,36};
    int *ptr = arr;
    int *ptr2 = ptr + 5;
    cout << ptr2 - ptr << "\n";
    return 0;
}