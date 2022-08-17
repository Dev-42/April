/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root1
 * @param {TreeNode} root2
 * @return {boolean}
 */
var leafSimilar = function(root1, root2) {
    let dfs = function(root,leaves){
        if(!root)
            return;
        if(root.left == null && root.right == null)
            leaves.push(root.val);
        dfs(root.left,leaves);
        dfs(root.right,leaves);
    };
    
    let leaves1 = [];
    let leaves2 = [];
    dfs(root1,leaves1);
    dfs(root2,leaves2);
     return (leaves1.length == leaves2.length &&
            leaves1.every((v, i) => v === leaves2[i]));
};