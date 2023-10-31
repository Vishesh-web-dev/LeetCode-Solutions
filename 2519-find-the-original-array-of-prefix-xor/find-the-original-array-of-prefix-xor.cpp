class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        //in O(1) space need to store prev value
        int prev = pref[0];
        for(int i = 1 ; i < pref.size() ; i++){
            int temp = pref[i];
            pref[i] = pref[i]^prev;
            prev = temp;
        }
        return pref;
    }
};