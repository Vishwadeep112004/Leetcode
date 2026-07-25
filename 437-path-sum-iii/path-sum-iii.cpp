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
    int give(TreeNode* root, long long k)
    {
        if(!root)return 0;
        int ans=0;
        k-=root->val;
        if(k==0)ans+=1;
        ans+=give(root->left,k);
        ans+=give(root->right,k);
        return ans;
    }
public:
    int pathSum(TreeNode* root, int k) 
    {
        if(!root)return 0;
        queue<TreeNode*> q;
        q.push(root);
        int ans=0;
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            ans+=give(node,k);
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
        }
        return ans;
    }
};