class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        bool hadInc = false, hadDec = false, hadIncAgain = false, p = -1, q = -1;
        int i = 0;
        while( i < nums.size() - 1 && nums[i + 1] > nums[i]) {
            hadInc = true;
            i++;
        }
        while(i < nums.size() - 1 && nums[i + 1] < nums[i]){
            hadDec = true;
            i++;
        }
        while(i < nums.size() - 1 && nums[i + 1] > nums[i]){
            i++;
            hadIncAgain = true;
        }
        
        return hadInc && hadDec && hadIncAgain && i == nums.size() - 1;
    }
};