class Solution {
    bool check(vector<int> a,int m,int d){
        int cnt = 0,sum = 0;
        for(int i = 0 ; i < a.size() ; i++){
            if(sum + a[i] > m){
                sum = 0;
                cnt++; 
            }
            sum += a[i];
        }
        cnt++;
        return (cnt <= d)?1:0;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(),weights.end())-1;
        int r = accumulate(weights.begin(),weights.end(),0)+1;
        while(r-l > 1){
            int m = (l+r)/2;
            if(check(weights,m,days)){
                r = m;
            }else{
                l = m;
            }
        }
        return r;
    }
};