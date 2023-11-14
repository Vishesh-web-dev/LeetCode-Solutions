class Solution {
public:
    int countPalindromicSubsequence(string s) {
        //all same 
        //find first and last occ of all the char
        //trverse from first to last idx for all the characters and count
        //all unique characters using set

        vector <pair<int,int>> v(26,{-1,-1});
        for(int i = 0 ; i < s.length() ; i++){
            if(v[s[i]-'a'].first == -1){
                v[s[i] - 'a'].first = i;
            }else{
                v[s[i] - 'a'].second = i;
            }
        }

        int cnt = 0;
        for(int i = 0 ; i < 26 ; i++){
            if(v[i].second != -1){              
                unordered_set<char> st;
                for(int j = v[i].first + 1; j < v[i].second ; j++){
                    st.insert(s[j]);
                }
                cnt += st.size();
            }
        }
        return cnt;
    }
};