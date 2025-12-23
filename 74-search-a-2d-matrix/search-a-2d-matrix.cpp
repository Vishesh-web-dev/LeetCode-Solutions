class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // start from top right 
        // if target is more move down else move left
        // if right < 0 or down == matrix.size() then return false
        int right = matrix[0].size() - 1, down = 0; //top => i
        while(down != matrix.size() && right >= 0 ){
            int curr = matrix[down][right];
            if(curr > target){
                right--;
            }else if(curr < target){
                down++;
            }else{
                return true;
            }
        }
        return false;
    }
};