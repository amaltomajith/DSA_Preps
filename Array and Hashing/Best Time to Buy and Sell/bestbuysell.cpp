#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

// 1. Define the function clearly outside of others
int maxProfit(std::vector<int>& prices) {
    if (prices.empty()) return 0;

    int min_buy_price = INT_MAX; 
    int max_p = 0;

    for (int current_price : prices) {
        if (current_price < min_buy_price) {
            min_buy_price = current_price;
        } 
        else if (current_price - min_buy_price > max_p) {
            max_p = current_price - min_buy_price;
        }
    }
    return max_p;
}

int main() {
    // 2. Create some test data
    std::vector<int> myPrices = {7, 1, 5, 3, 6, 4};

    // 3. Call the function and store the result
    int result = maxProfit(myPrices);

    // 4. Print it out to see your success!
    std::cout << "The maximum profit is: " << result << std::endl;

    return 0;
}