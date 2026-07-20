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
        int arr = -1002;
        rec(root, arr);
        cout<<arr<<endl;
        return !(arr == -1001);
    }
private:
    void rec(TreeNode* root, int &arr){
    if(!root || arr == -1001)
        return;

    rec(root->left, arr);

    if(arr == -1001) return;

    if(arr >= root->val){
        arr = -1001;
        return;
    }

    arr = root->val;

    rec(root->right, arr);
}
};
