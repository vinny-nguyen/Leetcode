// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <limits.h>

int maxProfit(int* prices, int pricesSize) {

    int min_price = INT_MAX;
    int max_profit = 0;

    for (int i = 0; i < pricesSize; i++) {

        if (prices[i] < min_price) {
            min_price = prices[i];
        } else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price;
        }
    }
    return max_profit;
}
