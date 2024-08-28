class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i: nums){
            mpp[i] = 0;
        }
        int max_cnt = 0;
        for(int i = 0; i< nums.size();i++){
            int currElem = nums[i], curr_cnt = 0;
            if(mpp[currElem] == 1)continue;
            while(mpp.find(currElem) != mpp.end()){
                mpp[currElem] = 1;
                curr_cnt++;
                currElem++;
            }
            currElem = nums[i]-1;
            while(mpp.find(currElem) != mpp.end()){
                mpp[currElem] = 1;
                curr_cnt++;
                currElem--;
            }
            max_cnt = max(curr_cnt, max_cnt);
        }
        return max_cnt;
    }
};