/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let cnt = 0;
    let maxi = 0;
    for(let n of nums)
        {
            if(n == 1)
                cnt++;
            else
                cnt = 0;
            maxi = Math.max(maxi,cnt);
        }
    return maxi;
};