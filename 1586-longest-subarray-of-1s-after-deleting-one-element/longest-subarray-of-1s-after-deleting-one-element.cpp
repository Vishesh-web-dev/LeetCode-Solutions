class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        // maxCnt, currCnt , prevCnt
        // when non zero occur
        // maxCnt update using prevCnt and currCnt
        // prevCnt = currCnt
        // currCnt = 0

        int maxCnt = 0, prevCnt = 0, currCnt = 0;

        for (auto i : nums) {
            if (i != 1) {
                maxCnt = max(maxCnt, prevCnt + currCnt);
                prevCnt = currCnt;
                currCnt = 0;
            } else {
                currCnt++;
            }
        }

        maxCnt = max(maxCnt, prevCnt + currCnt);

        return maxCnt == nums.size() ? maxCnt - 1 : maxCnt; //remove 1 when all ones
    }
};