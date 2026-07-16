// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "Enter the Length";
//     cin >> n;

//     int arr[n];
//     // n = sizeof(arr) / sizeof(int);
    
//     for(int i = 0; i<n ; i++){
//         cin >> arr[i];
//     }

//     for(int i = 0; i<n; i++){
//         cout << arr[i] << ",";
//     }
//     cout << endl ;

//     return 0;
// }


// Finding max in Arr 


#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,33868,47,5,8};
    int length = sizeof(arr) / sizeof(int);
    int max = arr[0];
    for (int i = 0 ; i< length ; i++){
        if (max< arr[i])
        {
            max = arr[i];
            
        }
    }
    cout << max;
    return 0;

    cout << arr ;


int array[] = {1,2,3,4,5};
    cout << *arr << endl ; 
    cout << *(arr+1) << endl;
}