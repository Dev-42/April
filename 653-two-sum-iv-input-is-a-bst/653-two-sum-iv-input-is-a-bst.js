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
        if(arr[low] + arr[high] == k)
            return true;
        else if(arr[low] + arr[high] > k) 
            high--;
        else if(arr[low] + arr[high] < k)
            low++;
    }
        return false;
};