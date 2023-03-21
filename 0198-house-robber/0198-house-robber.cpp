class Solution {

public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        dp[0] = nums[0];
        for(int i=1;i<n;i++){
            int fs=nums[i];
            if(i>1) fs += dp[i-2];
            int ss=dp[i-1];
            dp[i]=max(fs,ss);
        }
        return dp[n-1];
    }
};