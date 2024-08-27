class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr_mini = prices[0], profit = 0;
        for(int i = 1; i<prices.size();i++){
            if(prices[i] < curr_mini){
                curr_mini = prices[i];
            }else{
                profit = max(profit, prices[i] - curr_mini);
            }
        }
        return profit;
    }
};