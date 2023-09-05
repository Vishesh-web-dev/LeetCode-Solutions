class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.length(), m = p.length();
        if(n < m){
            return ans;
        }
        unordered_map<char,int> mp1,mp2;
        for(char i : p){
            mp2[i]++;
        }
        for(int i = 0 ; i < m;i++){
            mp1[s[i]]++;
        }
        if(mp1 == mp2){
            ans.push_back(0);
        }
        for(int i = m ; i < n; i++){
            mp1[s[i]]++;
            mp1[s[i-m]]--;
            if(mp1[s[i-m]] == 0){
                auto itr = mp1.find(s[i-m]);
                mp1.erase(itr);
            }
            if(mp1 == mp2){
                ans.push_back(i-m+1);
            }
        }
        return ans;
    }
};