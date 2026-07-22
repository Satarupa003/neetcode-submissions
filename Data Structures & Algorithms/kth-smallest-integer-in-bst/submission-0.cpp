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
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int>q;
        fun(root, k, q);
        return q.top();
    }
private:
    void fun(TreeNode* root, int k, priority_queue<int> &q){
        if(!root) return;
        q.push(root->val);
        if(q.size()>k) q.pop();
        fun(root->left, k, q);
        fun(root->right, k, q);
    }
};
