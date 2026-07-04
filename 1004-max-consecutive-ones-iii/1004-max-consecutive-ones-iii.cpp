class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeros = 0;
        int len = 0, maxlen = 0;

        int i = 0, j =0;

        while(j < nums.size()){
            if(nums[j] == 0){
                zeros++;
            }

            while(zeros > k){
                if(nums[i] == 0){
                    zeros--;
                }
                i++;
            }

            if(zeros <= k){
                len = j-i+1;
                maxlen = max(len , maxlen);
            }
            j++;
        }
        return maxlen;
    }
};