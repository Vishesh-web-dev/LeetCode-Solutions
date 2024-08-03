class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        int itr = 0;
        for(auto i : st){
            nums[itr++] = i;
        }
        return st.size();
    }
};