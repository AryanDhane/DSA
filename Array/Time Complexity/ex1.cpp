// 




#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int>& prices) {

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int price : prices) {

        minPrice = min(minPrice, price);

        int profit = price - minPrice;

        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}

int main() {

    vector<int> prices = {7,1,5,3,6,4};

    cout << "Maximum Profit = "
         << maxProfit(prices)
         << endl;

    return 0;
}