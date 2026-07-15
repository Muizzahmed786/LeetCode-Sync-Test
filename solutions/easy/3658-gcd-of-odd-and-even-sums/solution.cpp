class Solution {
public:
    int gcd(int a, int b){
        if(b == 0) return a;
        return gcd(b, a % b);
    }  
    
    int gcdOfOddEvenSums(int n) {
        int oddSum = 0;
        int evenSum = 0;
        int num = n;

        int oddNum = 1;
        while(num != 0){
            if(oddNum % 2 != 0){
                oddSum += oddNum;
                oddNum = oddNum + 2;
                num--;
            }
        }

        num = n;
        int evenNum = 2;
        while(num != 0){
            if(evenNum % 2 == 0){
                evenSum = evenSum + evenNum;
                evenNum = evenNum + 2;
                num--;
            }
        }

        cout << "odd sum : " << oddSum << endl;
        cout <<"even sum : " << evenSum << endl;

        return gcd(evenSum, oddSum);
    }
};