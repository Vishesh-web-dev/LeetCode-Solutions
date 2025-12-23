class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // 2 loops
        // marking in array
        // if all unique and duplicate ==> use sum, or xor
        // hashing
        // sorting or index sort which is same as marking (nums[i]==nums[nums[i]−1])
        // 
        // bit masking ?? 
        // floyd's cycle best solutoin to exist ??
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        
        slow = nums[0];

        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;

    }
};