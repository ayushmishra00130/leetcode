class Solution {
public:
    const int M = 1e9 + 7;

    long long findPow(long long a , long long b){
        if(b == 0){
            return 1;
        }

        long long x = findPow(a , b/2);

        if(b % 2 == 1){
            return (((x % M) * (x % M)) % M * (a % M)) % M;
        }
        else{
            return ((x % M) * (x % M)) % M;
        }
    }
    int countGoodNumbers(long long n) {
        return (long long)findPow(5,(n+1)/2) * findPow(4 , n/2) % M;
    }
};