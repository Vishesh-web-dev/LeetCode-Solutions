class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // keep track of minimum number till iterations

        int min = prices[0], profit = 0;
        for (auto price : prices) {
            int currProfit = price - min;
            if (currProfit > profit) {
                profit = currProfit;
            };
            if (min > price) {
                min = price;
            };
        }
        return profit;
    }
};