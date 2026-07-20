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
    TreeNode* invertTree(TreeNode* curr) {
        if(curr == NULL) return NULL;
        queue<TreeNode*>q;
        q.push(curr);
        while(!q.empty()){
            TreeNode* root = q.front();
            q.pop();
            swap(root->left, root->right);
            if(root->left) q.push(root->left);
            if(root->right) q.push(root->right);
        }
        return curr;
    }
};
