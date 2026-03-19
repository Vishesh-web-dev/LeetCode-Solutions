class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> xCnt(m + 1, vector<int>(n + 1, 0)),
            yCnt(m + 1, vector<int>(n + 1, 0));
        int subArrCnt = 0;
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                int isX = false, isY = false;
                if (grid[row][col] == 'X') {
                    isX = true;
                } else if (grid[row][col] == 'Y') {
                    isY = true;
                }
                xCnt[row + 1][col + 1] = (xCnt[row][col + 1] +
                                                 xCnt[row + 1][col] -
                                                 xCnt[row][col] )+ isX;
                yCnt[row + 1][col + 1] = (yCnt[row][col + 1] +
                                                 yCnt[row + 1][col] -
                                                 yCnt[row][col] )+ isY;
                if (xCnt[row + 1][col + 1] == yCnt[row + 1][col + 1] &&
                    xCnt[row + 1][col + 1] != 0) {
                    subArrCnt++;
                }
            }

           
        }
        return subArrCnt;
    }
};