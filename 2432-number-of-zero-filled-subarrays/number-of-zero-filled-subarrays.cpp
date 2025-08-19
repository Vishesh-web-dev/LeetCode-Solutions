class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt = 0;

        long long zeroCnt = 0;
        for(auto i: nums){
            if(i == 0){
                zeroCnt++;
            }else{
                cnt += (zeroCnt*(zeroCnt+1))/2;
                zeroCnt = 0;
            }
        }
        cnt += (zeroCnt*(zeroCnt+1))/2; 
        return cnt;
    }
};