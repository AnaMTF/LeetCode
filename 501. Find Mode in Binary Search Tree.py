# Given the root of a binary search tree (BST) with duplicates, return all the mode(s) (i.e., the most frequently occurred element) in it.

# If the tree has more than one mode, return them in any order.

# Assume a BST is defined as follows:

# The left subtree of a node contains only nodes with keys less than or equal to the node's key.
# The right subtree of a node contains only nodes with keys greater than or equal to the node's key.
# Both the left and right subtrees must also be binary search trees.
 

# Example 1:


# Input: root = [1,null,2,2]
# Output: [2]
# Example 2:

# Input: root = [0]
# Output: [0]

#---------------------------------------------------

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findMode(self, root):

        curr_node = root
        result = []
        curr_streak = 0
        curr_num = float("inf")
        max_streak = 0

        while curr_node:

            if curr_node.left:
                neighbor = curr_node.left

                while neighbor.right is not None:
                    neighbor = neighbor.right

                neighbor.right = curr_node
                tmp = curr_node.left
                curr_node.left = None
                curr_node = tmp

            else: 

                if curr_node.val == curr_num:
                    curr_streak += 1

                else:
                    curr_streak = 0
                    curr_num = curr_node.val
                
                if curr_streak == max_streak:
                    result.append(curr_num)
                    
                elif curr_streak > max_streak:
                    max_streak = curr_streak
                    result = [curr_num]
        
                curr_node = curr_node.right
        
        return result
