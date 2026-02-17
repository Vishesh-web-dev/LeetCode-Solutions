class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        for(int hrs = 0; hrs < 12; hrs++){
            for(int mins = 0; mins< 60 ; mins++){
                if(__builtin_popcount(hrs) + __builtin_popcount(mins) == turnedOn){
                    string time = to_string(hrs) + ":" + (mins < 10 ? "0" : "") + to_string(mins);
                    res.push_back(time);
                }
            }
        }
        return res;
    }
};