class Solution {
public:
    static bool comp(vector<int> a, vector<int> b){
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
        vector<vector<int>> merged;
        for(int i = 0 ; i < intervals.size() ; i++){
            int j = i+1;
            int temp = intervals[i][1];
            while(j < intervals.size() && intervals[j][0] <= temp){
                temp = max(intervals[j][1], temp);
                j++;
            }
            vector<int> newRange{intervals[i][0],temp};
            merged.push_back(newRange);
            i = j-1;
        }
        return merged;
    }
};