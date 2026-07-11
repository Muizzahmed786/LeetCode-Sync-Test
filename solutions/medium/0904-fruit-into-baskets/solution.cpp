class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // this problem is about finding a max subarray
        // which has atmost two distinct elements.

        int n = fruits.size();
        int left = 0;
        int right = 0;
        int maxFruits = 0;
        unordered_map<int, int> freq;
        
        while(right < n){
            freq[fruits[right]]++;
            while(freq.size() > 2){
                freq[fruits[left]]--;
                if(freq[fruits[left]] == 0) freq.erase(fruits[left]);
                left++;
            }
            int len = right - left + 1;
            maxFruits = max(maxFruits, len);
            right++;
        }
        return maxFruits;
    }
};