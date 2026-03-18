class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();

        vector<vector<int>> sum(m+1, vector<int>(n+1, 0));
        int lessThanKCnt = 0;
        for(int i =1 ; i<= m ; i++){
            for(int j = 1; j<= n ; j++){
                sum[i][j] = grid[i-1][j-1] + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];
                if(sum[i][j] <= k) {
                    lessThanKCnt++;
                }
            }
        }
        return lessThanKCnt;

    }
};