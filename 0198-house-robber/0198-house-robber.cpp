class Solution {

public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev=0;
        int curr=0;
        curr= nums[0];
        for(int i=1;i<n;i++){
            int fs=nums[i];
            if(i>1) fs += prev;
            int ss=curr;
            int next=max(fs,ss);
            prev=curr;
            curr=next;
        }
        return curr;
    }
};