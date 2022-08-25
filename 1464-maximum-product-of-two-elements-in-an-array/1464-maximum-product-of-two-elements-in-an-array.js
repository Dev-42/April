/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
    let n = nums.length;
    nums.sort((a,b) =>{
        return (a - b);
    });
    let max1 = nums[n - 1];
    let max2 = nums[n - 2];
    return (max1 - 1) * (max2 - 1);
};