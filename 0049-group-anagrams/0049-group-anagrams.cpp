class Solution {
public:

    string generate(string word){
        string newWord = "";
        int arr[26] = {0};

        for(char ch : word){
            arr[ch - 'a']++;
        }

        for(int i=0;i<26;i++){
            int freq = arr[i];

            if(freq > 0){
                newWord += string(freq , i + 'a');
            }
        }
        return newWord;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;;
        unordered_map<string , vector<string>> mp;

        for(int i = 0;i<n;i++){
            string temp = strs[i];

            string newWord = generate(temp);

            mp[newWord].push_back(strs[i]);
        }

        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};