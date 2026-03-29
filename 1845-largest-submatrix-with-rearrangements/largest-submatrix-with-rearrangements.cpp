class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int maxArea = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][j] = 0;
                } else if(i!=0){
                    matrix[i][j] += matrix[i - 1][j];
                }
            }
            vector<int> prefix = matrix[i];
            sort(prefix.begin(), prefix.end(), greater<int>());

            for(int itr = 0; itr< n ; itr++){
                maxArea = max(maxArea, prefix[itr] * (itr+1));
            }
        }
        return maxArea;
    }
};