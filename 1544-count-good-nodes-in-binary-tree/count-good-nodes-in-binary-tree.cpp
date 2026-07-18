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

    int give(TreeNode* root, int mx)
    {
        if(!root)return 0;
        if(root->val>=mx)return give(root->left,root->val)+give(root->right,root->val)+1;
        return give(root->left,mx)+give(root->right,mx);
    }
    
public:
    int goodNodes(TreeNode* root) {
        if(!root)return 0;
        return give(root->left, root->val)+give(root->right,root->val)+1;
    }
};