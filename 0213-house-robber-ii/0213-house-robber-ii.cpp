class Solution {
public:
    long long  robber(vector<int>& nums)
    {
        int n=nums.size();
        int prev2=0;
        int prev1=nums[0];
        for(int i=1;i<n;i++)
        {
            int take=nums[i];
            if(i>1)
            {
                take+=prev2;
            }
            int not_take=prev1;
            long long curr=max(take,not_take);
            prev2=prev1;
            prev1=curr;
        }
     return prev1;
    }
    int rob(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        int n=nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        for(int i=0;i<n;i++)
        {
            if(i!=0) v1.push_back(nums[i]);
            if(i!=n-1)  v2.push_back(nums[i]);
        }
    return max(robber(v2),robber(v1));
    }
};