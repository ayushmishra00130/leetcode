class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int s=0,e=numbers.size()-1;
        int currSum=0;
        while(s<e){
            currSum = numbers[s]+numbers[e];

            if(currSum == target){
                ans.push_back(s+1);
                ans.push_back(e+1);
                return ans;
            }

            else if(currSum > target){
                e--;
            }
            else{
                s++;
            }
        }

        return ans;
    }
};