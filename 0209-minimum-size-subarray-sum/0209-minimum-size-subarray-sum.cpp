class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        int sum = 0;
        int minSize = INT_MAX;

        while(j < n){
            sum += nums[j];

            while(sum >= target){
                minSize = min(minSize , j-i+1);

                sum -= nums[i];
                i++;
            }
            j++;
        }
        return minSize == INT_MAX ? 0 : minSize;
    }
};