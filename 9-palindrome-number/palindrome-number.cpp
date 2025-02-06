class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)return false;
        long long int rev = 0, num = x;
        while(x){
            rev =rev*10 + x%10;
            x /=10;
        }
        if(rev == num){
            return true;
        }
        return false;
    }
};