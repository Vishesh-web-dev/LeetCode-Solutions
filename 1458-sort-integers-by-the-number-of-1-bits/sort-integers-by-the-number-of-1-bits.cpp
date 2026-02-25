class Solution {
    static bool comp (int a, int b){
        int as1 = __builtin_popcount(a);
        int bs1 = __builtin_popcount(b);
        return as1 == bs1 ? a < b : as1 < bs1;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
         sort(arr.begin(), arr.end(), comp);
         return arr;
    }
};