class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int countOfIncreasing = 1;
        int countOfDecreasing = 1;
        int maxCount = 1;

        for(int i = 1; i< nums.size(); i++){
            if(nums[i] > nums[i-1]){
                countOfIncreasing++;
            }else{
                countOfIncreasing = 1;
            }
            if(nums[i] < nums[i-1]){
                countOfDecreasing++;
            }else{
                countOfDecreasing = 1;
            }
            maxCount = max({maxCount, countOfIncreasing, countOfDecreasing});
        }
        return maxCount;
    }
};