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
    typedef TreeNode node;
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        node* root3=new node(0);
        if(!root1 && !root2)return nullptr;
        if(!root1 || !root2)return (root1)?root1:root2;
        if(root1)root3->val+=root1->val;
        if(root2)root3->val+=root2->val;

        if(root1->left && root2->left)root3->left=mergeTrees(root1->left,root2->left);
        else if(root1->left)root3->left=root1->left;
        else root3->left=root2->left;

        if(root1->right && root2->right)root3->right=mergeTrees(root1->right,root2->right);
        else if(root1->right)root3->right=root1->right;
        else root3->right=root2->right;
        
        return root3;
    }
};