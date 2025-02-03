class Solution {
public:
    char findTheDifference(string s, string t) {
        int extra = 0;
        for(auto i: s){
            extra ^= int(i);
        }
        for(auto i: t){
            extra ^= int(i);
        }
        return char(extra);
    }
};