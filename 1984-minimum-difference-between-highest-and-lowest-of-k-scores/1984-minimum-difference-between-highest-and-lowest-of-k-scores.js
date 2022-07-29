/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var minimumDifference = function(nums, k) {
    let res = Infinity;
    if(k > nums.length)
        return 0;
    nums.sort((a,b) => a - b);
    for(let i = k - 1; i < nums.length ; i++)
        {
            res = Math.min(res , nums[i] - nums[i - k + 1]);
        }
    return res;
};