/**
 * @param {number[]} arr
 * @param {number} k
 * @param {number} threshold
 * @return {number}
 */
var numOfSubarrays = function(arr, k, threshold) {
    let window_sum = 0;
    let count = 0 , n = arr.length;
    for(let i = 0; i < k ; i++)
        {
            window_sum+=arr[i];
        }
    for(let i = 0 ; i < n+k-1 ; i++)
        {
            if(i != 0)
                {
                    window_sum -= arr[i - 1];
                    window_sum += arr[i + k -1];
                }
            let window_avg = window_sum / k;
            if(window_avg >= threshold)
                count++;
        }
    return count;
};