class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //O(n) and O(n)
        // set<int> st(nums.begin(), nums.end());
        // int itr = 0;
        // for(auto i : st){
        //     nums[itr++] = i;
        // }
        // return st.size();
        int inserterPtr = 1;
        for(int i = 1; i < nums.size() ; i++){
            if(nums[i] != nums[i-1]){
                nums[inserterPtr++] = nums[i];
            }
        }
        return inserterPtr;
    }
};