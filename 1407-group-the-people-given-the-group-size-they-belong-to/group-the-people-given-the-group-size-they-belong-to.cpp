class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        //brute
        unordered_map<int,vector<int>> mpp;
        vector<vector<int>> ans;
        for(int i = 0 ; i < groupSizes.size() ; i++){
            int sz = groupSizes[i];
            mpp[sz].push_back(i);
            if(mpp[sz].size() == sz){
                ans.push_back(mpp[sz]);
                mpp[sz].clear();
            }
        }
        
        return ans;
    }
};