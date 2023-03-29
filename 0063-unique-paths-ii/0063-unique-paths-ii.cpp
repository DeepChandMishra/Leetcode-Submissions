class Solution {
    int f(int i,int j,vector<vector<int>>& dp,vector<vector<int>> o){
        if(i>=0 && j>=0 && o[i][j]==1) return 0;
        if(i==0 && j == 0) return 1;
        if(i<0 || j<0 ) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int left=f(i-1,j,dp,o);
        int up=f(i,j-1,dp,o);
        return dp[i][j]=left + up;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
     int m=obstacleGrid.size();
     int n=obstacleGrid[0].size();
     vector<vector<int>>dp(m,vector<int>(n,-1));
     return f(m-1,n-1,dp,obstacleGrid);
    }
};