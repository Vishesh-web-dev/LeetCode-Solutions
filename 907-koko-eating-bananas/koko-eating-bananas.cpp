class Solution {
    bool check(vector<int> a,int h,int m){
        long long cnt = 0;
        for(int i = 0 ; i < a.size() ; i++){
            if(a[i]%m == 0){
                cnt += a[i]/m;
            }else{
                cnt += (a[i]/m)+1;
            }
        }
        if(cnt <= h){
            return true;
        }else{
            return false;
        }
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //B.F.
        // piles sum ceil value
        int l = 0,r = *max_element(piles.begin(),piles.end())+1;
        while(r-l > 1){
            int m = (l+r)/2;
            if(check(piles,h,m)){
                r = m;
            }else{
                l = m;
            }
        }
        return r;
    }
};