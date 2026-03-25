class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<long long>> prefix(m, vector<long long>(n, 0));
        vector<vector<long long>> suffix(m, vector<long long>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) {
                    prefix[0][0] = grid[0][0];
                } else if (i == 0) {
                    prefix[i][j] = grid[i][j] + prefix[i][j - 1];
                } else if (j == 0) {
                    prefix[i][j] = grid[i][j] + prefix[i - 1][j];
                } else {
                    prefix[i][j] = grid[i][j] + prefix[i][j - 1] +
                                   prefix[i - 1][j] - prefix[i - 1][j - 1];
                }
            }
        }

         for (int i = m-1; i >= 0; i--) {
            for (int j = n-1; j >= 0; j--) {
                if (i == m-1 && j == n-1) {
                    suffix[i][j] = grid[i][j];
                } else if (i == m-1) {
                    suffix[i][j] = grid[i][j] + suffix[i][j + 1];
                } else if (j == n-1) {
                    suffix[i][j] = grid[i][j] + suffix[i + 1][j];
                } else {
                    suffix[i][j] = grid[i][j] + suffix[i][j + 1] +
                                   suffix[i + 1][j] - suffix[i + 1][j + 1];
                }
            }
        }

         for (int i = 0; i < m - 1; i++) {
            if(prefix[i][n-1] == suffix[i+1][0]){
                return true;
            }
        }

        for(int j = 0 ; j < n-1 ; j++){
            if(prefix[m-1][j] == suffix[0][j+1]){
                return true;
            }
        }

        return false;
    }
};