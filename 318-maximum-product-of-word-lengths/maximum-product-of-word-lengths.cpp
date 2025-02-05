class Solution {
public:
    int maxProduct(vector<string>& words) {
        // // brute force
        // int maxP = 0;
        // for (int i = 0; i < words.size() - 1; i++) {
        //     for (int j = i + 1; j < words.size(); j++) {
        //         unordered_set<char> st;
        //         //can we reduce these below two loops some how
        //         //using some precomptation
        //         for (auto c : words[i]) {
        //             st.insert(c);
        //         }
        //         int isAll = 0;
        //         for (auto c : words[j]) {
        //             if (st.find(c) == st.end()) {
        //                 isAll++;
        //             }
        //         }
        //         //can we encode or create a mask for each word and then check on there bits
        //         //bits loop is smaller in size

        //         //since we are using set ==> then can represent each unique character in 
        //         //bits for max 26 bits since a to z(position)
        //         if (isAll == words[j].size()) {
        //             int product = words[i].size() * words[j].size();
        //             maxP = max(maxP, product);
        //         }
        //     }
        // }

        // return maxP;

        vector<int> wordsMask;
        for(auto word: words){
            int maskedWord = 0;
            for(auto alphabet : word){
                int pos = alphabet - 97;
                maskedWord = maskedWord | (1 << pos);
            }
            wordsMask.push_back(maskedWord);
        }
        for(auto i: wordsMask){
            cout<< i << " ";
        }
        int size = words.size();
        int maxP = 0;
        for(int i = 0 ; i < size-1 ; i++){
            for(int j = i+1; j < size ; j++){
                int currMaskedWord = wordsMask[i];
                int currMaskedWordJ = wordsMask[j];
                int isAll = 0;
                while(currMaskedWord){
                    if(((currMaskedWord&1) == 1) && ((currMaskedWordJ&1) == 0)){
                        isAll++;
                    }
                    currMaskedWord >>= 1;
                    currMaskedWordJ >>= 1;
                }
                if(isAll == __builtin_popcount(wordsMask[i])){
                    int product = words[i].size() * words[j].size();
                    maxP = max(product, maxP);
                }
            }
            
        }
        return maxP;
    }
};