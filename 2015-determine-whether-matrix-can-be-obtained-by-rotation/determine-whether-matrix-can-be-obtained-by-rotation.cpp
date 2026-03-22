class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = target.size();
        bool is0 = true, is90 = true, is180 = true, is270 = true;
        // 90 degrees
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (target[i][j] != mat[i][j])
                    is0 = false;

                if (target[i][j] != mat[n - j - 1][i])
                    is90 = false;

                if (target[i][j] != mat[n - i - 1][n - j - 1])
                    is180 = false;

                if (target[i][j] != mat[j][n - i - 1])
                    is270 = false;
            }
        }
        if (is0 || is90 || is180 || is270) {
            return true;
        } else {
            return false;
        }
    }
};