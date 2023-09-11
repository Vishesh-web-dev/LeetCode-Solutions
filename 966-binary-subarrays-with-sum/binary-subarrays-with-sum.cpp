class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        long long sum = accumulate(nums.begin(),nums.end(),0);
        if(sum < goal)return 0;
        unordered_map<int,int> mpp;
        for(int i = 1 ; i < nums.size() ; i++){
            nums[i] += nums[i-1];
        }
        long long cnt = 0;
        for(int i : nums){
            cout<<i<<endl;
           if(i == goal)cnt++;
           if(mpp.find(i-goal) != mpp.end()){
               cnt += mpp[i-goal];
           }   
           mpp[i]++;
        }
        return cnt;
    }
};