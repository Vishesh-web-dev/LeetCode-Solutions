class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int max_size = nums.size();
        int max_mask = (1 << max_size) - 1;
        for(int i = 0 ; i<= max_mask ; i++){
            vector<int> curr;
            for(int j = 0 ; j < max_size ; j++){
                int shouldInclude = (i >> j) & 1;
                if(shouldInclude == 1){
                    curr.push_back(nums[j]);
                }
            }
            res.push_back(curr);
        }
        return res;
    }
};