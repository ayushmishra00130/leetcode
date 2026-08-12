class Solution {
public:
    typedef pair<int,int> P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int> mp;
        for(int &num : nums){
            mp[num]++;
        }

        //min heap
        priority_queue<P , vector<P> , greater<P>> pq;

        //pushing in min heap
        //maintaining size to k
        for(auto &it : mp){
            int val = it.first;
            int freq = it.second;

            pq.push({freq , val});

            if(pq.size() > k){
                pq.pop();
            }
        }

        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};