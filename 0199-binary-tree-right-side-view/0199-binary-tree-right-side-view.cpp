/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void solve(TreeNode* root,int level,vector<int> &ans){
        if(!root) return;
        
        if(level == ans.size()) ans.push_back(root->val);
        
        if(root->right) solve(root->right,level+1,ans);
        if(root->left)  solve(root->left,level+1,ans);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(!root) return ans;
        solve(root,0,ans);
        return ans;
    }
};