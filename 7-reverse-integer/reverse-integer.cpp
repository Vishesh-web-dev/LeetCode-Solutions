class Solution {
public:
    int reverse(int x) {
        long long reverse = 0;
        while(x!=0){
            int lastDigit = x%10;
            x /= 10;
            if((reverse < -214748364) || reverse > 214748364 ){
                return 0;
            }
            reverse = reverse * 10 + lastDigit;   
        }
        return reverse;
    }
};