class Solution {
public:
    int countPrimes(int n) {
        vector<int> primes(n, 0);
        int primeCnt = 0;
        for(int i = 2 ; i < n ; i++){
            if(primes[i] == 0){
                primeCnt++;
            }
            int j = 2;
            while((i*j) < n){
                primes[i*j] = 1;
                j++;
            }
        }
        return primeCnt;
    }
};