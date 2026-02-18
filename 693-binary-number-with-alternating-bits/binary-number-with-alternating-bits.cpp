class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev_bit = -1;
        while(n){
            int last_bit = n%2;
            n /= 2;
             if(prev_bit == last_bit){
                return false;
            }
            prev_bit = last_bit;
        }
        return true;
    }
};