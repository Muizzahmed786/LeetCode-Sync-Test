class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = s.length();
        int maxLen = 0;
        for(int i=0;i<l;i++){
            vector<int> mp(255, 0);
            for(int j=i;j<l;j++){
                if(mp[s[j]] == 1) break;
                int len = j - i + 1;
                maxLen = max(maxLen, len);
                mp[s[j]] = 1;
            }
        }

        return maxLen;
    }
};