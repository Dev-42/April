var findTarget = function(root, k) {
    let arr = [];
    let inorder = (root) => {
        if(!root) 
            return;
        inorder(root.left);
        arr.push(root.val);
        inorder(root.right);
    }
    inorder(root);
    let low = 0,high = arr.length - 1;
    while(low < high) {
        let sum = arr[low] + arr[high];
        if(sum > k) 
            high--;
        else if(sum < k)
            low++;
        else
            return true;
    }
        return false;
};