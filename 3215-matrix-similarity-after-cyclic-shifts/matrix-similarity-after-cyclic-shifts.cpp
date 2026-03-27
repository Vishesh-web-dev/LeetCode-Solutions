class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> res = mat;
        for (int i = 0; i < res.size(); i++) {

            vector<int> temp = res[i];
            int sz = temp.size();
            k = k % sz;
            if (i & 1) {
                reverse(temp.begin(), temp.begin() + (sz - k));
                reverse(temp.begin() + (sz - k), temp.end());
            } else {
                reverse(temp.begin(), temp.begin() + k);
                reverse(temp.begin() + k, temp.end());
            }
            reverse(temp.begin(), temp.end());
            res[i] = temp;
        }

        if (res == mat) {
            return true;
        }

        return false;
    }
};