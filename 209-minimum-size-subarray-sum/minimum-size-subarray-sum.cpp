class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // long long sum = accumulate(nums.begin(),nums.end(),0);
        // if(sum < target)return 0;

        long long currsum = 0;
        int i = 0, j = 0,minSize = INT_MAX;
        while(j < nums.size()){
            if(currsum < target){
                currsum += nums[j++];
            }else{
                minSize = min(minSize,j-i);
                currsum -= nums[i++];
                // cout<<"Curr minsize "<<minSize<<endl;
            }
            // cout<<currsum<<endl;
        }
        cout<<i<<" "<<j<<endl;
        while(i<nums.size() && currsum >= target){
            currsum -= nums[i++];
        }
        minSize = min(minSize,j-i+1);
        return minSize > nums.size() ? 0 : minSize;
        // return minSize;
    }
};