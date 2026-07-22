class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currMax = nums[0];
        int maxSum = nums[0];

        int currMin = nums[0];
        int minSum = nums[0];

        int total = nums[0];

        int n = nums.size();

        for(int i = 1;i < n ; i++){
            total += nums[i];

            currMax = max(currMax + nums[i] , nums[i]);
            maxSum = max(currMax , maxSum);

            currMin = min(currMin + nums[i], nums[i]);
            minSum = min(currMin , minSum);
        }
        
        if(maxSum < 0){
            return maxSum;
        }

        return(max(maxSum , total - minSum));
    }
};