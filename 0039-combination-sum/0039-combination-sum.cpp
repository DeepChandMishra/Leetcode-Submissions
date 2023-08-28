class Solution {
    void find(vector<int>& c,int t,vector<vector<int>> &ans,vector<int> &temp,int index,int sum){
        if(sum > t) return;
        if(sum == t) ans.push_back(temp);
        for(int i= index;i<c.size();i++){
            sum += c[i];
            temp.push_back(c[i]);
            find(c,t,ans,temp,i,sum);
            sum -= c[i];
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>temp;
        find(candidates,target,ans,temp,0,0);
        return ans;
    }
};