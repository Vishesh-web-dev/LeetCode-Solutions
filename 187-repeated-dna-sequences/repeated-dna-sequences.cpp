class Solution {
public:
    int encode(char a){
        switch(a){
            case 'A': return 0;
            case 'C': return 1;
            case 'G': return 2;
            case 'T': return 3;
        }
        return -1;
    }
    vector<string> findRepeatedDnaSequences(string s) {
        // s.substr(i, j - i + 1)
        vector<string> res;
        int sz = s.size();
        if (sz < 10) {
            return res;
        }
        unordered_map<int, int> mpp;

        // while (j < sz) {
        //     string sub = s.substr(i, j - i + 1);
        //     mpp[sub]++;

        //     if (mpp[sub] == 2) {
        //         res.push_back(sub);
        //     }
        //     i++;
        //     j++;
        // }
        // return res;


        //above solution takes more space so bit encodein is used
        int mask = 0;
        for(int i = 0; i< 10; i++){
            mask = ((mask << 2) | encode(s[i]));
        }
        int ones = (1 << 20)-1;
        mpp[mask]++;
        int i = 1,j=10;
        while(j < sz){
            mask = (((mask << 2) | encode(s[j]))& ones) | (encode(s[i]) << 18); 
            mpp[mask]++;
            if(mpp[mask] == 2){
                res.push_back(s.substr(i, j - i + 1));
            }
            j++;
            i++;
        }
        
        return res;
    }
};