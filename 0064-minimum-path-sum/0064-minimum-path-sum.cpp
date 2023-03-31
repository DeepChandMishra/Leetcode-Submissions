class Solution {
    int minPath(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i == 0 && j==0) return grid[i][j];
        if(i<0 || j<0) return 1e9;
        if(dp[i][j] != -1) return dp[i][j];
        int left=grid[i][j] + minPath(i,j-1,grid,dp);
        int up=grid[i][j] + minPath(i-1,j,grid,dp);
        return dp[i][j]=min(left,up);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>  dp(m,vector<int>(n,-1));
        return minPath(m-1,n-1,grid,dp);
    }
};