class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        int l = 0 , r = 0 , n = s.size() , res = 0;
        map<char,int> m;
        while(r < n)
        {
            m[s[r]]++;
            while(m['a'] && m['b'] && m['c'])
            {
                res += n - r;
                m[s[l++]]--;
            }
            r++;
        }
        return res;
    }
};