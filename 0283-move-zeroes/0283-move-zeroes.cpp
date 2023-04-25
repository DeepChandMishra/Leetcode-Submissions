class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    
    // Move all the non-zero elements to the front of the vector
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }
    
    // Fill the rest of the vector with zeros
    while(j < n) {
        nums[j] = 0;
        j++;
    }
  }
};