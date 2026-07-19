class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int ls = 0;
        int rs = 0;
        int t = 0;
        for(int i =0;i<n;i++){
            t += nums[i];
        }
        
        for(int i =0;i<n;i++){
            rs = t - nums[i] - ls;

            if(ls == rs){
                return i;
            }

            ls += nums[i];
        }

        return -1;
    }
};