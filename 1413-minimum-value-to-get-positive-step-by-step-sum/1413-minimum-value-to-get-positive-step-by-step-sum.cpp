class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int prefix=0;
        int minval=0;
        for(auto i : nums){
            prefix += i;
            minval=min(minval,prefix);
        }
        return (1-minval);
    }
};