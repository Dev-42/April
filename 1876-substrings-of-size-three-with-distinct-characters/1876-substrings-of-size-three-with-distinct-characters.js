/**
 * @param {string} s
 * @return {number}
 */
var countGoodSubstrings = function(s) {
    let res = 0;
    for(let i=0;i<s.length - 2;i++)
        {
            let st = new Set();
            for(let j=i;j<i+3;j++)
                {
                    st.add(s[j]);
                }
            res+= st.size == 3;
        }
    return res;
    
};