class Solution {
public:
    string recurr (string s){
        string res = "";
        int count = 1;
        char prev = s[0];
        for(int i = 1 ;i < s.size(); i++){
            if(s[i] == prev){
                count++;
            }else{
                res += to_string(count) + prev;
                count = 1;
            }
            prev = s[i];
        }
        res += to_string(count) + prev;
        return res;
    }
    string countAndSay(int n) {
        // "111221"
        string res = "1";
        for(int i = 1; i < n ; i++){
            res = recurr(res);
        }
        return res;
    }
};