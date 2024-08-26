class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int i =0; i< nums.size() ; i++){
            if(mpp.find(target - nums[i]) != mpp.end()){
                 ans.insert(ans.end(), {i, mpp[target - nums[i]]});
            }
            mpp[nums[i]] = i;
        }
        return ans;
    }
};