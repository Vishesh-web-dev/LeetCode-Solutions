class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        //precompute product of 2 numbers of in all possible way isnce n <. 10^4 ==> O(n^2)
        unordered_map<int,int>productsMap;
        int cnt = 0;
        for(int i = 0; i < nums.size()-1; i++)
        {       
            for(int j = i+1; j< nums.size();j++){
                productsMap[nums[i]*nums[j]]++;
            }
        }
        for(auto i: productsMap){
            if(i.second > 1){
                cnt += 8*((i.second*(i.second-1))/2);
            }
        }
        return cnt;
    }
};