class Solution {
public:
    void sortColors(vector<int>& nums) {
        int st =0, md =0 , en = nums.size() -1;
        while(md <= en){
            if(nums[md] == 0){
                swap(nums[md++], nums[st++]);
            }else if(nums[md] == 2){
                swap(nums[md], nums[en--]);
            }else{
                md++;
            }
        }
    }
};