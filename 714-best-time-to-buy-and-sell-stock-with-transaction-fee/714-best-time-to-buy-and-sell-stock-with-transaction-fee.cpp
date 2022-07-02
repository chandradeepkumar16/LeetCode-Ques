class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
         int buy = 0, sell = -100000;
        for (int price: prices) {
            // best buy state: current one of what we can achieve selling now
            buy = max(buy, sell + price - fee);
            // best sell state: current one or what we can achieve purchasing now
            sell = max(sell, buy - price);
        }
        return buy;
    }
};