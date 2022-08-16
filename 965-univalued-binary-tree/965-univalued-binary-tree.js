/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {boolean}
 */
let isUnivalTree = function(root) {
    if(!root)
        return true;
    if(root.left != null && root.left.val != root.val)
        return false;
    if(root.right != null && root.right.val != root.val)
        return false;
    return isUnivalTree(root.left) && isUnivalTree(root.right);
};