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

    void swapChilds(TreeNode* parent)
    {
        swap(parent -> left, parent -> right);
        if(parent -> left){
            swapChilds(parent -> left);
        }
        if(parent -> right){
            swapChilds(parent -> right);
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return root;
        swapChilds(root);
        return root;
    }
};