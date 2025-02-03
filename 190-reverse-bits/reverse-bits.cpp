class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int size = 32, i = 0;
        uint32_t res = 0;
        while(i < size){
            res = res | (((n >> i) & 1) << (size - i - 1));
            i++;
        }
        return res;
    }
};