class Solution {
public:
    bool triplesExists(int a, int b, int n){
        double res = sqrt((a*a) + (b*b));
        return res == floor(res) && res <= n;
    }

    int countTriples(int n) {
        if(n <= 3)return 0;
        // first a and b has to be smaller than c
        // second a != b
        // third if found pair a,b,c then b,a,c also exists
        // using above point we can consider a < b
        // i.e. a < b < c and if found one pair count it as two

        // now how do we iterate and use above condition to get the sum
        // lets start with n = 3 
        // a = 1, b = 2 and c = 3
        // since a< b< c and c === n

        // therefore iterate till c == n
        // lets use n = 4
        // a = 1, b = 2 , c = 3
        // a = 2, b = 3 and c = 4

        // if n = 5
        // a = 1 , b = 2, c = 3 
        // therefore b till n-1 and a till n-2

        // a = 1, b = 3, c = 4
        // a = 2, b = 3, c = 4
        // a = 3, b = 4 ,c = 5

        // so end condition will be a = n-2 and b = n-1 and c = n

        int count = 0;
        // for(int c = 3; c<=n ;c++ ){
            for(int b = 2; b<=n-1;b++){
                for(int a = 1; a<=n-2 && a<b;a++){
                    if(triplesExists(a,b,n)){
                        count +=  2;
                    }
                }
            }
        // }
        return count;
    }
};