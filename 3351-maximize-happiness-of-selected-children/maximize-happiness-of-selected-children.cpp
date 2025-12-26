class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        // brute solution
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long totalHappiness = 0;
        for (int i = 0; i < k; i++) {
            if ((happiness[i] - i) > 0) {

                totalHappiness += happiness[i] - i;
            }
        }
        return totalHappiness;
    }
};