class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length = 0;
        int i  = 0;
        unordered_map<char,int> mp;


        for(int j = 0 ; j < s.size(); j++){
            mp[s[j]]++;

            if(mp[s[j]] == 2){
                while(mp[s[j]] != 1){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
            max_length = max(max_length , (int)mp.size());
        }

        return max_length;
    }
};