class Solution {
public:
    // double calc(double x, int n) {}
    double myPow(double x, int n) {
        bool isNeg = false;
        long long exp = n;
        if (exp < 0) {
            isNeg = true;
            exp = exp*-1;
        }

        if (n == 0) {
            return 1;
        } else if (n & 1) {
            double res = x * myPow(x, exp - 1);
            return isNeg ? 1/res: res;
        } else {
            double res = myPow(x * x, exp / 2);
            return isNeg ? 1/res: res;
        }
    }
};