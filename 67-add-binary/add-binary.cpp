class Solution {
public:
    string addBinary(string a, string b) {
        char carry = '0';
        int i = a.size() - 1, j = b.size() - 1;
        string ans = "";
        while (i >= 0 && j >= 0) {
            if (a[i] == '1' && b[j] == '1' && carry == '1') {
                ans.push_back('1');
                carry = '1';
            } else if ((a[i] == '1' && b[j] == '1' && carry == '0') ||
                       (a[i] == '1' && b[j] == '0' && carry == '1') ||
                      (a[i] == '0' && b[j] == '1' && carry == '1')){
                    ans.push_back('0');
                    carry = '1';
                }
            else if (a[i] == '1' || b[j] == '1' || carry == '1') {
                ans.push_back('1');
                carry = '0';
            } else {
                ans.push_back('0');
                carry = '0';
            }
            i--;
            j--;
        }
        while(i  >= 0){
            if(a[i] == '1' && carry == '1'){
                ans.push_back('0');
                carry = '1';
            }else if(a[i] == '1' || carry == '1'){
                ans.push_back('1');
                carry = '0';
            }else{
                ans.push_back('0');
                carry = '0';
            }
            i--;
        }
        while(j  >= 0){
            if(b[j] == '1' && carry == '1'){
                ans.push_back('0');
                carry = '1';
            }else if(b[j] == '1' || carry == '1'){
                ans.push_back('1');
                carry = '0';
            }else{
                ans.push_back('0');
                carry = '0';
            }
            j--;
        }
        if(carry == '1'){
            ans.push_back('1');
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};