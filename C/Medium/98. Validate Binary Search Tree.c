// https://leetcode.com/problems/validate-binary-search-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool bstnode(struct TreeNode *root, long min, long max) {
    if (!root) {
        return true;
    }

    if (root->val <= min || root->val >= max) {
        return false;
    } else {
        return bstnode(root->left, min, root->val) && bstnode(root->right, root->val, max);
    }
}


bool isValidBST(struct TreeNode* root) {
    return bstnode(root, LONG_MIN, LONG_MAX);
}
