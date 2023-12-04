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

    int findLeftHeight(TreeNode* root)
    {
        int count = 0;
        while(root != NULL)
        {
            root = root->left;
            count += 1;
        }
        return count;
    }
    int findRightHeight(TreeNode* root)
    {
        int count = 0;
        while(root != NULL)
        {
            root = root->right;
            count += 1;
        }
        return count;
    }
    int countNodes(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }
        int l = findLeftHeight(root);
        int r = findRightHeight(root);
        if(l == r)
        {
            return pow(2,l) -1;
        }
        else{
            return 1 + countNodes(root->left) + countNodes(root->right);
        }
    }
};