class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       int maxsum=INT_MIN;
       int temp1=0;
       
       int minsum=INT_MAX;
       int temp2=0;
       
       int sum=0;
       for(int i=0;i<nums.size();i++){
           sum += nums[i];
           
           temp1 += nums[i];
           if(temp1>maxsum) maxsum=temp1;
           if(temp1<0)  temp1=0;
           
           temp2 += nums[i];
           if(temp2<minsum) minsum=temp2;
           if(temp2>0)  temp2=0;
       }
       if(maxsum<0) return maxsum;
       return max(maxsum,sum-minsum);
        
    }
};