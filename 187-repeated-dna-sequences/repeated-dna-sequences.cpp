class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        // s.substr(i, j - i + 1)
        vector<string> res;
        int sz = s.size();
        if (sz < 10) {
            return res;
        }

        map<string, int> mpp;
        int i = 0, j = 9;
        while (j < sz) {
            string sub = s.substr(i, j - i + 1);
            mpp[sub]++;

            if (mpp[sub] == 2) {
                res.push_back(sub);
            }
            i++;
            j++;
        }
        return res;
    }
};