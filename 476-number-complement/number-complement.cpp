class Solution {
public:
    int findComplement(int num) {
        int tempNum = num;
        int mask = 1;
        while(tempNum){
            tempNum = tempNum >> 1; 
            if(tempNum == 0)break;
            mask = ((mask << 1) | 1);
        }
        return ~num ^ ~mask;
    }
};