class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, e = s.length() -1;

        while(e >= 0 && s[e] == ' ') e--;
        while(e>=0 && s[e] != ' '){
             count++;
             e--;
        }
        return count;
    }
};