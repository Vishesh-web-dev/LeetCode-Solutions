class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
       unordered_map<int,int> freq, colorMap;
       vector<int> op;
       for(auto i = 0 ; i< queries.size(); i++){
            if(colorMap.find(queries[i][0]) != colorMap.end()){
                int prevVal = colorMap[queries[i][0]];
                if(--freq[prevVal] == 0){
                    freq.erase(prevVal);
                }
            }   

            colorMap[queries[i][0]] = queries[i][1];
            freq[queries[i][1]]++;
            op.push_back(freq.size());
       } 
       return op;
    }
};