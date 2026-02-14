class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int>result;
        int size = nums.size();
        for(int i = 0; i< size ; i++){
            int indexToAccess = ((nums[i] < 0 ? (size - (abs(nums[i])%size) ) : (nums[i]%size)) + i)%size;
            result.push_back(nums[indexToAccess]); 
        }
        return result;
    }
};