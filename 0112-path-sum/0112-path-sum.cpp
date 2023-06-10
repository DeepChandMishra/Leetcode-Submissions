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
public:
    void solve(TreeNode* root,int k,int sum, int &count){
        if(!root){
            return;
        } 
        sum += root->val;
        if (!root->left && !root->right) {  // Check if it's a leaf node
          if (sum == k) {
            count++;
          }
        }
        
        solve(root->left,k,sum,count);
        solve(root->right,k,sum,count);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int count=0;
        int sum =0;
        solve(root,targetSum,sum,count);
        return count > 0;
    }
};