class Solution {
public:
    typedef pair<int,int> P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int ,int> mp;
        for(int &num : nums){
            mp[num]++;
        }

        vector<vector<int>> bucks(n+1);
        //index -> freq
        //value -> element
        //bucks[i] -> elements having i freqency

        for(auto &it : mp){
            int val = it.first;
            int freq = it.second;

            bucks[freq].push_back(val);
        }
        
        //pick elements from right to left
        //decrease k

        vector<int> ans;
        for(int i = n;i>=0;i--){
            if(bucks[i].size() == 0){
                continue;
            }

            while(bucks[i].size() > 0 && k > 0){
                ans.push_back(bucks[i].back());
                bucks[i].pop_back();
                k--;
            }
        }
        return ans;
    }
};