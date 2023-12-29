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
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;

        return isSymmetric(root->left, root->right);
    }

    bool isSymmetric(TreeNode* rootLeft, TreeNode* rootRight)
    {
        if(rootLeft == NULL && rootRight == NULL) return true;
        if(rootRight == NULL || rootLeft == NULL) return false;
        if(rootLeft->val != rootRight ->val) return false;
        return isSymmetric(rootLeft->left, rootRight->right) && isSymmetric(rootLeft -> right, rootRight -> left);
    }
};