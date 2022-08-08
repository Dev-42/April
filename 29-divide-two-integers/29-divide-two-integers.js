var divide = function(dividend, divisor) {
    let result = dividend / divisor;
    if(result > (2**31 - 1 )) result --;
    return result < 0 ? Math.ceil(result) : Math.floor(result);
};