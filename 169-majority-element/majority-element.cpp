class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityElem, cnt = 0;
        for (auto i : nums) {
            if (cnt == 0) {
                majorityElem = i;
            }
            if (i == majorityElem) {
                cnt++;
            } else {
                cnt--;
            }
        }
        return majorityElem;
    }
};