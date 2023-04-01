class Solution {
    public:
      int solve(int row, int col, vector<vector<int>> &matrix,vector<vector<int>> &dp)
    {
        if(col<0 || col>matrix[0].size()-1) return 1E9;
        if(row==0) return matrix[row][col];
        if(dp[row][col] != -1) return dp[row][col];
        int up = matrix[row][col] + solve(row-1,col,matrix,dp);
        int leftDiagonal = matrix[row][col] + solve(row-1,col-1,matrix,dp);
        int rightDiagonal = matrix[row][col] + solve(row-1,col+1,matrix,dp);
        return dp[row][col] = min(up,min(leftDiagonal,rightDiagonal));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans = INT_MAX;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        for(int i=0;i<m;i++)
        {
            ans = min(ans,solve(n-1,i,matrix,dp));
        }
        return ans;
    }
};