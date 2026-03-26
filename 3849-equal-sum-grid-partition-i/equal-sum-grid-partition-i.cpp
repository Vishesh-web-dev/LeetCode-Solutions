class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<long long> prefixH(m, 0);
        vector<long long> prefixV(n, 0);
        long long total = 0;

        for (int i = 0; i < m; i++) {
            long long sum = 0;
            for (int j = 0; j < n; j++) {
                sum += grid[i][j];
                total += grid[i][j];
            }
            prefixH[i] = sum + (i == 0 ? 0 : prefixH[i - 1]);
        }

        for (int j = 0; j < n; j++) {
            long long sum = 0;
            for (int i = 0; i < m; i++) {
                sum += grid[i][j];
            }
            prefixV[j] = sum + (j == 0 ? 0 : prefixV[j - 1]);
        }

        for (int i = 0; i < m - 1; i++) {
            if (total - prefixH[i] == prefixH[i]) {
                return true;
            }
        }

        for (int j = 0; j < n - 1; j++) {
            if (total - prefixV[j] == prefixV[j]) {
                return true;
            }
        }

        return false;
    }
};