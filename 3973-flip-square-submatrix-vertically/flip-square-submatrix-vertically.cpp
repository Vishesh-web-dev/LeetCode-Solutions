class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for(int col = y; col < y + k; col++){
            int st = x, en = x+k-1;
            while(st<en){
                swap(grid[st++][col], grid[en--][col]);
            }
        }
        return grid;
    }
};