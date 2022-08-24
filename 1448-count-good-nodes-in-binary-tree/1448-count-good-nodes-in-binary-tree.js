var goodNodes = function(root) {
    let count = 0
    
    const dfs = (node, maxValue) => 
    {
        if (node.val >= maxValue) 
        { 
            count++ 
            maxValue = node.val
        }
        if (node.left) dfs(node.left, maxValue)
        if (node.right) dfs(node.right, maxValue)
    }
    
    dfs(root, root.val)

    
    return count
};