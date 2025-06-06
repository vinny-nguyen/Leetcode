// https://leetcode.com/problems/validate-binary-search-tree/

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

    bool bstnode(TreeNode *root, long min, long max) {
        // make sure to assert(root) on exam
        
        // NULL check for pointers on exam:
        if (root == NULL) {
            return true;
        }

        if (root->val <= min || root->val >= max) {
            return false;
        } else {
            return bstnode(root->left, min, root->val) && bstnode(root->right, root->val, max);
        }
    }

    bool isValidBST(TreeNode* root) {
        return bstnode(root, LONG_MIN, LONG_MAX);
    }
};
