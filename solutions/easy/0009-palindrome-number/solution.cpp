class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long dig = 0;
        long rev = 0;
        int num = x;
        while(x > 0){
            dig = x % 10;
            rev = rev*10 + dig;
            x = x / 10;
        }
        if(rev == num) return true;
        return false; 
    }
};