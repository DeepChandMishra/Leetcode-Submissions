class Solution {
    void find(vector<int>& c,int t,vector<vector<int>> &ans,vector<int> &temp,int index){
        if(t == 0){
          ans.push_back(temp);
          return;  
        } 
        if(t<0 || index >= c.size()) return ;
        

        temp.push_back(c[index]);
        find(c,t-c[index],ans,temp,index);
        temp.pop_back();
        
        find(c,t,ans,temp,index+1);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>temp;
        find(candidates,target,ans,temp,0);
        return ans;
    }
};