class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int st = 0, en = n - 1;
        int ans=-1;

        if(colors[st] != colors[en]){
          return    ans = n-1;
        }

        st++;
        while(st < n  && colors[st] == colors[st - 1]){
            st++;
        }

        ans = max(ans, abs(en-st));

        st = 0;
        en--;

        while(en >= 0 && colors[en] == colors[en + 1]){
            en--;
        }

        ans = max(ans, abs(en-st));

        return ans;
    }
};