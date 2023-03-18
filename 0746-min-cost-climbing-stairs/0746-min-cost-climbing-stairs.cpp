class Solution {
public:
    int mincost(int n,vector<int>cost,vector<int>& dp){
        if(n<=1) return dp[n]=cost[n];
        
        if(dp[n] != -1) return dp[n];
        else{
            int left=mincost(n-1,cost,dp) + cost[n];
            int right=mincost(n-2,cost,dp) + cost[n];
            dp[n]= min(left,right);
        }
        return dp[n];
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
       int n=cost.size();
       vector<int>dp(n+1,-1);
        return min(mincost(n-1,cost,dp),mincost(n-2,cost,dp));
    }
};