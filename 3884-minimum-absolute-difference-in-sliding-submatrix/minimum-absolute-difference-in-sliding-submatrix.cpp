class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ans(m - k + 1, vector<int>(n - k + 1, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i + k <= m && j + k <= n) {

                    set<int> st;
                    for (int r = i; r < i + k; r++) {
                        for (int c = j; c < j + k; c++) {
                            st.insert(grid[r][c]);
                        }
                    }
                    vector<int> v(st.begin(), st.end());                
                    int min_diff = INT_MAX;
                    for (int idx = 1; idx < v.size(); idx++) {
                        min_diff = min(abs(v[idx] - v[idx - 1]), min_diff);
                    }
                    if (min_diff == INT_MAX) {
                        min_diff = 0;
                    }
                    ans[i][j] = min_diff;
                }
            }
        }
        return ans;
    }
};