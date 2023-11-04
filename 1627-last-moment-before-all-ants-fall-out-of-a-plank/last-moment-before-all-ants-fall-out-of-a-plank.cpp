class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {

        //max distance travelled by any ant is the answer
        //and it does'nt matter if they collide cause 
        //they just exchange name and that does not matter
        //they will travel the same
        int ans = 0;
        for(int i : left)
            ans = max(ans,i);
        for(int i  : right)
            ans = max(ans,n-i);
        return ans;
    }
};