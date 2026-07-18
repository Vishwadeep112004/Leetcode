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
    int maxLevelSum(TreeNode* root) {
        vector<int> levelSum;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int sz=q.size();
            int sum=0;
            while(sz--)
            {
                TreeNode* node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            levelSum.push_back(sum);
        }

        int mx=0;
        for(int i=1;i<levelSum.size();i++)
        {
            mx=(levelSum[i]>levelSum[mx])?i:mx;
        }
        return mx+1;
    }
};