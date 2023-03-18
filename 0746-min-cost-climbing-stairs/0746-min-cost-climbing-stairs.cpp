class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       int n=cost.size();
       vector<int>dp(n+1);
       for(int i=2;i<n+1;i++){
        int left = dp[i-1] + cost[i-1];
        int right=dp[i-2] + cost[i-2];
        dp[i]=min(left,right);
       }
        return dp[n];
    }
};