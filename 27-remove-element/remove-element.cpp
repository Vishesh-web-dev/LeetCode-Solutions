class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start_ptr = 0, end_ptr = nums.size() - 1, count = 0;
        while(start_ptr <= end_ptr){
            if(nums[start_ptr] == val && nums[end_ptr] != val){
                count++;
                swap(nums[start_ptr++],nums[end_ptr--]);
            }else if(nums[start_ptr] != val){
                start_ptr++;
            }else if(nums[end_ptr] == val){
                end_ptr--;
                count++;
            }
        }  
        return nums.size()-count;
    }
};