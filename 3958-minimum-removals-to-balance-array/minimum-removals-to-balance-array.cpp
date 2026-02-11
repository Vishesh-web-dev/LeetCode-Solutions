class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int i = 0, j = 1;
        int maxLen = 1;

        sort(nums.begin(), nums.end());
        while(i < nums.size() && j < nums.size()){
            while(j < nums.size() && nums[j] <= ((long long)nums[i] * k)){
                j++;
            }
            maxLen = max(maxLen , j-i);
            if(j == nums.size()){
                break;
            }
            while(i < nums.size() && nums[j] > ((long long)nums[i] * k)){
                i++;
            }
        }
        return nums.size()-maxLen;
    }
};