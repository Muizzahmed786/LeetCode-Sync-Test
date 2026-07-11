class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = s.length();
        vector<int> hashmap(255, -1);
        int left = 0;
        int right = 0;
        int maxLen = 0;
        while(right < l){
            if(hashmap[s[right]] != -1){
                if(hashmap[s[right]] >= left){
                    left = hashmap[s[right]] + 1;
                }
            }
            int len = right - left + 1;
            maxLen = max(maxLen, len);
            hashmap[s[right]] = right;
            right++;
        }

        return maxLen;
    }
};