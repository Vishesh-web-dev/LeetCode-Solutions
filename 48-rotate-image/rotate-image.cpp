class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        // take transpose(swap(m[i][j],m[j][i])) and reverse
        for (int i = 0; i < m.size(); i++) {
            for (int j = i; j < m.size(); j++) {
                swap(m[i][j], m[j][i]);
            }
            reverse(m[i].begin(), m[i].end());
        }
        // for (int i = 0; i < m.size(); i++) {
        // }
    }
};