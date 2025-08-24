class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        // maxCnt, currCnt , prevCnt
        // when non zero occur
        // maxCnt update using prevCnt and currCnt
        // prevCnt = currCnt
        // currCnt = 0

        int maxCnt = 0, prevCnt = 0, currCnt = 0;
        bool isAllOne = true;
        for (auto i : nums) {
            if (i != 1) {
                maxCnt = max(maxCnt, prevCnt + currCnt);
                prevCnt = currCnt;
                currCnt = 0;
                isAllOne = false;
            } else {
                currCnt++;
            }
        }
        if (isAllOne) {
            maxCnt = currCnt - 1;
        } else {
            maxCnt = max(maxCnt, prevCnt + currCnt);
        }
        
        return maxCnt;
    }
};