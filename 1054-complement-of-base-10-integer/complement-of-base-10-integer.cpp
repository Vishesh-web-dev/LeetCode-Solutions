class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0)return 1;
        int bits = 0;
        int nCopy = n;
        while(nCopy != 0){
            bits++;
            nCopy >>= 1;
        }   
        return (~n & ((1 << (bits))-1));
    }
};