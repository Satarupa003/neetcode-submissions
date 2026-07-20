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
    bool isValidBST(TreeNode* root) {
        vector<int>arr;
        rec(root, arr);
        for(int i = 1; i<arr.size(); i++){
            if(arr[i-1]>=arr[i]) return false;
           // cout<<arr[i]<<endl;
        }
        return true;
    }
private:
    void rec(TreeNode* root, vector<int>& arr){
        if(!root) return ;
        rec(root->left, arr);
        arr.push_back(root->val);
        rec(root->right, arr);
    }
};
