class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       int n=cost.size();
       int prev2=0;
       int prev=0;
       for(int i=2;i<=n;i++){
        int left = prev + cost[i-1];
        int right= prev2 + cost[i-2];
        
        int curr=min(left,right);
         prev2=prev;
         prev=curr;
       }
        return prev;
    }
};