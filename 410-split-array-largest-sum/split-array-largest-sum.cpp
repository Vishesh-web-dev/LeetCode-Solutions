class Solution {
    bool check(vector<int> nums,int m,int k){
        int sum = 0,cnt = 0;
        for(int i = 0 ; i < nums.size() ;i++){
            if(sum + nums[i] > m){
                sum = 0;
                sum += nums[i];
                cnt++;
            }else{
                sum += nums[i];
            }
        }
        cnt++;
        cout<<cnt<<" "<<m<<endl;
        if(cnt <= k){
            return true;
        }else{
            return false;
        }
    } 
public:
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(),nums.end())-1;
        int r = accumulate(nums.begin(),nums.end(),0)+1;

        while(r-l>1){
            int m = (l+r)/2;
            if(check(nums,m,k)){
                r = m;
            }else{
                l = m;
            }
            cout<<"l "<<l<<" r "<<r<<endl;
        }
        return r;
    }
};