# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# https://leetcode.com/problems/binary-tree-inorder-traversal
class Solution:

    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []
        self.helper(root, result)
        return result

    def helper(self, root: Optional[TreeNode], result):
        if root is not None:
            self.helper(root.left, result)
            result.append(root.val)
            self.helper(root.right, result)

        
