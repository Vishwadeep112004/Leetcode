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
    int cnt=0;
    int nodes(TreeNode* root)
    {
        if(!root)return 0;
        return nodes(root->left)+nodes(root->right)+1;
    }
    int give(TreeNode* root)
    {
        if(!root) return 0;
        int sum=root->val+give(root->left)+give(root->right);
        cnt+=(sum/nodes(root)==root->val)?1:0;
        return sum;
    }
public:
    int averageOfSubtree(TreeNode* root) 
    {
        if(!root)return 0;
        give(root);
        return cnt;
    }
};