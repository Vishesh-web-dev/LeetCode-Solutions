class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long cnt = 0;
        long long occ = 1;
        for (int i =0 ;i < prices.size() - 1; i++){
            if(prices[i] - 1 == prices[i+1]){
                occ++;
            }else{
                cnt += ((occ) * (occ + 1))/2;
                occ = 1;
            }
        }
        cnt += ((occ) * (occ + 1))/2;
        return cnt;
    }
};