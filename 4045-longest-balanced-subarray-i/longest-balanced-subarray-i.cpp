class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        // brute force
        int lngArr = 0;

        for (int i = 0; i < nums.size(); i++) {
            unordered_set<int> st;
            int odd = 0, even = 0;

            for (int j = i; j < nums.size(); j++) {
                if (st.find(nums[j]) == st.end()) {
                    if (nums[j] & 1) {
                        odd++;
                    } else {
                        even++;
                    }
                }

                st.insert(nums[j]);

                if (odd == even) {
                    lngArr = max(lngArr, j - i + 1);
                }
            }
        }
        return lngArr;
    }
};