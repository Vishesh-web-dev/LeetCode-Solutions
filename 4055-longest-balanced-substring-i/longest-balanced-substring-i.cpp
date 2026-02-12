class Solution {
public:
    int longestBalanced(string s) {
        int maxLen = 0;
        for (int i = 0; i < s.size(); i++) {
            vector<int> cnt(26, 0);
            for (int j = i; j < s.size(); j++) {
                cnt[s[j] - 'a']++;
                int freq = 0;
                bool isBalanced = true;

                for (int c : cnt) {
                    if (c == 0)
                        continue;
                    if (c != 0 && freq == 0)
                        freq = c;
                    if (c != freq) {
                        isBalanced = false;
                        break;
                    }
                }

                if (isBalanced) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }
        return maxLen;
    }
};