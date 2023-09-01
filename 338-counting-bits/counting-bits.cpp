class Solution {
public:
    vector<int> countBits(int n) {
        //pop_count
        vector<int> ans;
        for(int i = 0 ; i <= n ;i++){
            ans.push_back(__builtin_popcount(i));
        }
        return ans;
    }
};