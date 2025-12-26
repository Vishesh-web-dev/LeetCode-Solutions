class Solution {
public:
    int bestClosingTime(string customers) {
        // have count of y and nbefore
        // then using method count till
        // we calculate penalty at each hour since we know y and n count at that
        // point befor and after
        int ycnt = 0, nbeforeCnt = 0, hr, penalty = INT_MAX;

        for (char i : customers) {
            if (i == 'Y')
                ycnt++;
        }

        for (int i = 0; i < customers.size(); i++) {
            if (penalty > ycnt + nbeforeCnt) {
                penalty = ycnt + nbeforeCnt;
                hr = i;
            }
            if (customers[i] == 'Y') {
                ycnt--;
            } else {
                nbeforeCnt++;
            }
        }

        if (penalty > ycnt + nbeforeCnt) {
            penalty = ycnt + nbeforeCnt;
            hr = customers.size();
        }
        return hr;
    }
};