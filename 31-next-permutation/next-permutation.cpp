class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int smallestToIncrease = 101, smallestToIncIdx;
        //lets figure out smallest group from left that can be increased first or pivot
        int groupSize = 2;
        for(int i = nums.size() -1; i > 0 ;i--){
            if(nums[i] <= nums[i-1]){
                groupSize++;
            }else{
                break;
            }
        }

        if(groupSize > nums.size()){
            reverse(nums.begin(), nums.end());
            return;
        }else if(nums.size() < 2){
            return;
        }

        //now find just greater or smallest number which is greater than n-groupSize index element

        for(int i =( nums.size() - groupSize + 1); i < nums.size() ; i++){
            if(nums[i] > nums[nums.size() - groupSize] && nums[i] <= smallestToIncrease){
                smallestToIncrease = nums[i];
                smallestToIncIdx = i; //last index for reverse thing to work
            }
        }

        // now swap groups first with smallestToInceaseIdx
        int temp = nums[nums.size() - groupSize];
        nums[nums.size() - groupSize] = nums[smallestToIncIdx];
        nums[smallestToIncIdx] = temp;

        //avoid it since everything after pivot is in decresing order 
        //so first swap just likw we did avobe and reverse after pivot instead of sort

        //1.
        //now sort all numbers after nums.size() - groupSize
        // sort(nums.begin() + nums.size() - groupSize + 1, nums.end());

         reverse(nums.begin() + nums.size() - groupSize + 1, nums.end());
    }
};