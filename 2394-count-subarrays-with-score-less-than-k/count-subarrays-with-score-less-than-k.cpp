class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int i = 0, j = 0;
        long long sum = 0;
        long long cnt = 0;
        // when j reach end all the sub array are coverd 
        while(j < nums.size()){
            int size = j-i+1;
            if((sum + nums[j])*size < k){
                cnt += size;
                sum += nums[j++];
            }else{
                sum -= nums[i++];
            }
        }
        return cnt;
    }
};