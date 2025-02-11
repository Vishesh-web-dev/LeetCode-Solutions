class Solution {
public:
    string removeOccurrences(string s, string part) {
        string res = "";
        int partsize = part.size();
        for(auto c: s){
            res += c;
            if(res.size() >= partsize && res.substr(res.size() - partsize) == part){
                res.erase(res.size() - partsize);
            }
        }
        return res;
    }
};