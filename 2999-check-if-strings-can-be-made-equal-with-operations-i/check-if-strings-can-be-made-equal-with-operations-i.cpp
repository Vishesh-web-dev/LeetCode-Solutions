class Solution {
    static bool isEqual(string s1, string s2) { return s1 == s2; }

public:
    bool canBeEqual(string s1, string s2) {
        bool isStringsEqual = isEqual(s1, s2);

        if (isStringsEqual)
            return isStringsEqual;

        swap(s1[0], s1[2]);

        isStringsEqual = isEqual(s1, s2);
        if (isStringsEqual)
            return isStringsEqual;

        swap(s1[1], s1[3]);

        isStringsEqual = isEqual(s1, s2);
        if (isStringsEqual)
            return isStringsEqual;

        swap(s1[0], s1[2]);

        isStringsEqual = isEqual(s1, s2);
        if (isStringsEqual)
            return isStringsEqual;

        return false;
    }
};