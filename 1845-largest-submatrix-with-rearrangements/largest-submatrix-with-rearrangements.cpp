class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {

        vector<int> consecutiveOnes(matrix[0].size(), 0);
        int largestArea = 0;

        for(int row = 0 ; row < matrix.size(); row++){

            for(int col = 0 ; col < matrix[0].size(); col++){

                if(matrix[row][col] == 0){
                    consecutiveOnes[col] = 0;
                }else{
                    consecutiveOnes[col]++;
                }
            }

             vector<int> temp = consecutiveOnes;

            sort(temp.begin(),temp.end(),greater<int>());

            for(int i=0;i< matrix[0].size();i++){
                largestArea=max(largestArea,temp[i]*(i+1)); //conidering every possible rectangle with it
            }
        }

        return largestArea;
    }
};