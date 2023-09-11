class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        //brute
        vector<vector<int>> ans;
        vector<pair<int,int>> res;
        for(int i = 0 ; i < groupSizes.size() ; i++){
            pair<int,int> p = make_pair(groupSizes[i],i);
            res.push_back(p);
        }
        sort(res.begin(),res.end());

        for(int i = 0 ; i < res.size() ;){
            vector<int> temp;
            int times = res[i].first;
            while(times--){
                temp.push_back(res[i].second);
                i++;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};