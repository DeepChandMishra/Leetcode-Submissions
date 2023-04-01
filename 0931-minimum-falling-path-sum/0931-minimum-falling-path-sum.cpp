class Solution {
    public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
    int mini=INT_MAX;
    int n=matrix.size();
    vector<vector<int>> dp(n,vector<int> (n,0));
    
    for(int i=0;i<n;i++){
        dp[0][i]=matrix[0][i];
    }
    
    for(int row=1;row<n;row++){
        for(int col=0;col<n;col++){
            int leftupper=matrix[row][col];
                if(col>0){
                    leftupper+=dp[row-1][col-1];                        
                }
                else{
                    leftupper+=1e8;
                }
            int upper=matrix[row][col]+dp[row-1][col];
            int rightupper=matrix[row][col];
            if(col+1<n){
                rightupper+=dp[row-1][col+1];
            }
            else{
                rightupper+=1e8;
            }
            dp[row][col]=min(leftupper,min(upper,rightupper));
            
        }
    }
    
    for(int i=0;i<n;i++){
        mini=min(mini,dp[n-1][i]);
    }
    return mini;
}
};