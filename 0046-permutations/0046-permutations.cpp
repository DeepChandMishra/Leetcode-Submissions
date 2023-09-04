class Solution {
    void find(vector<vector<int>> &ans,vector<int>nums,vector<int> &temp ,vector<int> &marker){
        if(nums.size() == temp.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(!marker[i]){
                marker[i]=1;
                temp.push_back(nums[i]);
                find(ans,nums,temp,marker);
                marker[i]=0;
                temp.pop_back();
            }
        }
        
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        vector<int>marker(nums.size(),0);
        find(ans,nums,temp,marker);
        return ans;
    }
};