class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char,int> mapEven1,mapOdd1,mapEven2 ,mapOdd2;

        for(int i = 0; i< s1.size(); i++){
            if(i&1){
                mapOdd1[s1[i]]++;
                mapOdd2[s2[i]]++;
            }else{
                mapEven1[s1[i]]++;
                mapEven2[s2[i]]++;
            }
        }
        return mapOdd1 == mapOdd2 && mapEven1 == mapEven2;
    }
};