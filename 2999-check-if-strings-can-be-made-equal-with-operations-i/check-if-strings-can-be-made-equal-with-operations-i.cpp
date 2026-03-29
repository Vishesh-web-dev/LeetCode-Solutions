class Solution {
    static bool isEqual(string s1, string s2) { return s1 == s2; }

public:
    bool canBeEqual(string s1, string s2) {
        for (int i = 0; i < 4; i++) {
            if (i & 1) {
                swap(s1[1], s1[3]);
            } else {
                swap(s1[0], s1[2]);
            }
            if (s1 == s2)
                return true;
        }
        return false;
    }
};