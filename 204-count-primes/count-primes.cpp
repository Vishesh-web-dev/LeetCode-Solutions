class Solution {
public:
    int countPrimes(int n) {
        vector<int> primes(n, 0);
        int primeCnt = 0;
        // for(int i = 2 ; i < n ; i++){
        //     if(primes[i] == 0){
        //         primeCnt++;
        //     }
        //     int j = 2;
        //     while((i*j) < n){
        //         primes[i*j] = 1;
        //         j++;
        //     }
        // }


        //mark multiples of a number only when it is a prime and start marking from i square
        for(int i = 2 ; i < n ; i++){
            if(primes[i] == 0){
                primeCnt++;
                for(long long j = (long long)i*i ; j< n ; j+=i){
                    primes[j] = 1;
                }
            }
        }
        return primeCnt;
    }
};