class Solution {
    public:
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> temp;
    find(candidates, target,ans,temp, 0, 0);
    return ans;
}
 void find(vector<int>& c,int t,vector<vector<int>> &ans,vector<int> &temp,int index,int sum){
        if(sum > t) return;
        if(sum == t){
           ans.push_back(temp);
            return;
        } 
        for(int i= index;i<c.size();i++){
            
            if(i != index && c[i-1] == c[i]) continue;
            sum += c[i];
            temp.push_back(c[i]);
            find(c,t,ans,temp,i+1,sum);
            sum -= c[i];
            temp.pop_back();
        }
 }
};