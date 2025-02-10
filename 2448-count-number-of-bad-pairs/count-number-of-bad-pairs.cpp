class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        //find gooPairs
        // j - nums[j] = i - nums[i]
        //create a map store all the j-nums[j] pairs
        //find i-nums[i] in it and count them
        
        unordered_map<int,long long> freq;
        long long size = nums.size(), goodPairs = 0;

        for(int i = 0 ;i < size ; i++){
            goodPairs += freq[nums[i]-i];
            freq[nums[i] - i]++;
        }

        long long badPairs = ((size * (size-1))/2) - goodPairs;
        return badPairs;
    }
};