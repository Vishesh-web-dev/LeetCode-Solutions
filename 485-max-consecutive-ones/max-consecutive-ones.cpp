class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currCnt = 0;
        int maxCnt = 0;
        for (int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                currCnt++;
            }else{
                maxCnt = max(maxCnt, currCnt);
                currCnt = 0;
            }
        }
        maxCnt = max(maxCnt, currCnt);
        return maxCnt;
    }
};