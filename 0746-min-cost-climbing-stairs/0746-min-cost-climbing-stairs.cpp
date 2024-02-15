class Solution {
    int minCost(vector<int>& cost,int i,vector<int>& dp){
        if(i<=1) return cost[i];
        
        if(dp[i] != -1) return dp[i];
        int pick=minCost(cost,i-1,dp);
        int notPick=minCost(cost,i-2,dp);
        
        return dp[i]=cost[i]+min(pick,notPick);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return min(minCost(cost,n-1,dp),minCost(cost,n-2,dp));
    }
};