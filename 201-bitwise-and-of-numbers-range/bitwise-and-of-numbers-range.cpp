class Solution {
public:
    int countBits(int a) {
        int cnt = 0;
        while (a) {
            cnt++;
            a = a >> 1;
        }
        return cnt;
    }
    int rangeBitwiseAnd(int left, int right) {
        int numOfBitsL = countBits(left), numOfBitsR = countBits(right);
        cout << numOfBitsL << " " << numOfBitsR;
        if (left == right) {
            return left;
        } else if ((numOfBitsL == numOfBitsR) && (numOfBitsL != 0)) {
            int ans;
            for( long long int i = left; i<= right ; i++){
                if(i == left){
                    ans = i;
                }else{
                    ans &= i;
                }
            }
            return ans;
        }
        return 0;
    }
};