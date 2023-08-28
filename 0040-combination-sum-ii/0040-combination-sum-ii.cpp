class Solution {
    public:
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> res;
    vector<int> cur;
    helper(res, cur, candidates, target, 0, 0);
    return res;
}
void helper(vector<vector<int>>& res, vector<int>& cur, const vector<int>& candidates, int target, int i, int pre){
    if(target == 0){
        res.push_back(cur);
        return;
    }
    if(i == candidates.size() || target < 0) return;
    helper(res, cur, candidates, target, i + 1, target);
    if(i > 0 && candidates[i - 1] == candidates[i] && pre == target) return; 
    cur.push_back(candidates[i]);
    helper(res, cur, candidates, target - candidates[i], i + 1, target);
    cur.pop_back();
    
}
};