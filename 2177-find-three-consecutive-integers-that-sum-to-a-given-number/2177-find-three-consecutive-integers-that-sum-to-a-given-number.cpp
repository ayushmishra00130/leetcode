class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> ans;

        if(num %3){
            return ans;
        }

        long long k = num / 3;
        return {k-1 , k , k+1};
    }
};