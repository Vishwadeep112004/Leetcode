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
   
    void pre(TreeNode* root, vector<int> &a)
    {
        if(!root)return;
        if(!root->left && !root->right)a.push_back(root->val);
        pre(root->left,a);
        pre(root->right,a);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> temp1;
        vector<int> temp2;
        pre(root1, temp1);
        pre(root2, temp2);
        // sort(temp1.begin(),temp1.end());
        // sort(temp2.begin(),temp2.end());
        return temp1==temp2;
    }
};