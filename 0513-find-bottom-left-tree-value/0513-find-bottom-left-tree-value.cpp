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
    int findBottomLeftValue(TreeNode* root) {
        if(!root)return 0;
        int count  = INT_MIN;
        int value;
        doWork(root,count,0,value);
        return value;
    }
    
    
    void doWork(TreeNode * root,int &count,int Level,int &res){
        if (!root) return;
        else if (Level>count){
            count = Level;
            res = root->val;
        }
        
        doWork(root->left, count,Level+1, res);
        doWork(root->right,count,Level +1,res);
    }
};