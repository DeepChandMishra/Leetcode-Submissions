class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if ((n == 0) || (k <= 0))
        {
            return;
        }
        vector<int> Copy(n);
        for (int i = 0; i < n; i++)
        {
            Copy[i] = nums[i];
        }
            
        for (int i = 0; i < n; i++)
        {
            nums[(i + k)%n] = Copy[i];
        }
    }
};