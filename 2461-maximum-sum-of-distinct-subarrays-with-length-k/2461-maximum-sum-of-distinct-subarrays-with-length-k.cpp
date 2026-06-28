class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long result = 0;
        long long currWin = 0;

        unordered_set<int> st;

        int i = 0;
        int j= 0;

        while(j < n){
            //check prresence
            while(st.count(nums[j])){
                currWin -= nums[i];
                st.erase(nums[i]);
                i++;
            }

            currWin += nums[j];
            st.insert(nums[j]);

            if(j - i+1 == k){
                result = max(result , currWin);

                currWin -= nums[i];
                st.erase(nums[i]);
                i++;
            }
            j++;
        }
        return result;
    }
};