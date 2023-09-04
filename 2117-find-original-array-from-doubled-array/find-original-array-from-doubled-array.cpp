class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        vector<int> res,empty;
        if(n%2 != 0){
            return empty;
        }
        vector<int> mpp(2*100001,0);
        for(int i : changed){
            mpp[i]++;
        }
        sort(changed.begin(),changed.end());
        for(int i = 0 ; i < n ;i++){
            if(mpp[changed[i]] == 0)continue; //used
            //curr - element - freq - reduced as we;;
            mpp[changed[i]]--;
            int key = changed[i]*2;
            if(mpp[key] != 0){
                mpp[key]--;
                res.push_back(changed[i]);
            }else{
                return empty;
            }
        }
        return res;
    }
};