class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int resI = 0, currI = 0;
            string temp = "";
            while (resI < res.size() && currI < strs[i].size() &&
                   res[resI] == strs[i][currI]) {
                temp += res[resI];
                resI++;
                currI++;
            }
            res = temp;
        }
        return res;
    }
};