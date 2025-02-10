class Solution {
public:
    string clearDigits(string s) {
        int size = s.size();
        for(int i = 0 ; i< size-1;i++){
            if(s[i]>='a' && s[i] <= 'z' && (s[i+1]<'a' || s[i+1] > 'z')){
                s.erase(i,2);
                if(i != 0){
                    i-=2; //cause i++
                    size-=2;
                }else{
                    size -=2;i--;
                }
            }
        }
          return s;
        
        
    }
};