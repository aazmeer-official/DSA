#include <iostream>
#include <climits>
using namespace std;

void buy (int *price , int n) {
    int bestBuy [100000] ;
    bestBuy [0] = INT_MAX;
    int maxProfit = 0;
    for (int i =1 ; i < n ; i++){
        bestBuy[i] = min(bestBuy[i-1], price[i-1]);
        int profit = price[i] - bestBuy[i];
        maxProfit = max(maxProfit,profit);
    }
    cout << maxProfit;
}

int main(){
    int prices[6] = {7,1,5,3,6,4};
    int n = sizeof(prices) / sizeof(int) ;
    buy(prices, n);
    return 0;
}