class Solution {
    bool checkIfVovel(char a){
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
            return true;
        return false;
    }
public:
    int maxVowels(string s, int k) {
        long long cnt = 0;
        long long maxCnt;
        for(int i = 0 ; i < k ; i++){
            if(checkIfVovel(s[i]))
                cnt++;
        }
        maxCnt = cnt;
        for(int i = k ; i < s.length() ; i++){
            if(checkIfVovel(s[i]))
                cnt++;
            if(checkIfVovel(s[i-k]))
                cnt--;
            maxCnt = max(maxCnt,cnt);
        }
        return maxCnt;
    }
};