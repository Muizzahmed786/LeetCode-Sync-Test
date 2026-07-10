class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int leftSum = 0;
        int rightSum = 0;
        int sum = 0;

        for(int i=0;i<k;i++){
            leftSum = leftSum + cardPoints[i];
        }
        sum = leftSum + rightSum;

        int rightIdx = n - 1;
        for(int i=k-1;i>=0;i--){
            leftSum = leftSum - cardPoints[i];
            rightSum = rightSum + cardPoints[rightIdx];
            rightIdx--;
            sum = max(sum, leftSum + rightSum);
        }

        return sum;
    }
};