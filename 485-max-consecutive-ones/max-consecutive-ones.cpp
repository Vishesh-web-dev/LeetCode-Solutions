class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0;
        int prev = 0;
        for (int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                curr++;
            }else{
                prev = curr>prev?curr:prev;
                curr = 0;
            }
        }
        if(curr > prev) return curr;
        return prev;
    }
};