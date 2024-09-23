class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long int maxP = INT_MIN;
        long long int currP = 0;
        //logic whenever 0 occurs treat it as a new segment
        //for each segment calculate max product back and forth 
        //to handle the odd number of negative senario
        //came to this solution using dry run
        //imp *** we can always skip only first or end negative number 
        //if there is odd number of negatives therefor caluate it from first and last
        for (int i : nums) {
            if (currP == 0 || i == 0) {
                currP = i;
            } else {
                currP *= i;
            }
            maxP = max(maxP, currP);
        }
        currP = 0;
        for (auto i = nums.rbegin(); i != nums.rend(); ++i) {
            if (currP == 0 || *i == 0) {
                currP = *i;
            } else {
                currP *= *i;
            }
            maxP = max(maxP, currP);
        }
        return maxP;
    }
};