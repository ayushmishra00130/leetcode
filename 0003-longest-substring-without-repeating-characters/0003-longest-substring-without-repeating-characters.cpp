class Solution {
public:
    int lengthOfLongestSubstring(string s) {

      vector<int> cnt(256, 0);

      int right = 0;
      int left = 0;
      int maxAns = 0;
      while(right < s.size()){
        cnt[s[right]]++;
        
        while(cnt[s[right]] > 1){
            
            cnt[s[left]]--;
            left++;
        }

         maxAns = max(maxAns, right - left + 1);
        right++;
      } 
      return maxAns;
    }
};