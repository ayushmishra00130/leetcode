class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currMax = nums[0];
        int currMin = nums[0];
        int ans = abs(nums[0]);

        for(int i = 1;i<nums.size();i++){
            currMax = max(currMax + nums[i] , nums[i]);
            currMin = min(currMin + nums[i] , nums[i]);

            ans = max({ans , currMax , abs(currMin)});
        }
        return ans;
    }
};