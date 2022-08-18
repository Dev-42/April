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
 * @return {string[]}
 */
var binaryTreePaths = function(root) {
    let result = [];
    if(!root)
        return result;
    binaryPaths(result,root,root.val.toString())
    return result;
};

let binaryPaths = function(result,root,t){
    if(!root.left && !root.right){
        result.push(t);
        return;
    }
    if(root.left)
        binaryPaths(result,root.left,t + "->" + root.left.val.toString());
    if(root.right)
        binaryPaths(result,root.right,t + "->" + root.right.val.toString());
};