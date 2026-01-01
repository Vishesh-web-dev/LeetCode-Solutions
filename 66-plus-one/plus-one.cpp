class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0, itr = digits.size() - 1;
        do {
            if (digits[itr] + 1 <= 9) {
                digits[itr] += 1;
                carry = 0;
            } else {
                carry = 1;
                digits[itr--] = 0;
            }
        } while (itr >= 0 && carry == 1);

        if (carry == 1) {
            digits.emplace(digits.begin(), 1);
        }
        return digits;
    }
};