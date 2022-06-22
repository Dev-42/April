class Solution {
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char,int> count;
        for(char ch:s)
        {
            count[ch]++;
        }
        int result = 0;
        bool odd_res = false;
        
        for(auto c:count)
        {
            if(c.second % 2 == 0)
                result += c.second;
            else{
                odd_res = true;
                result += c.second - 1;
            }
        }
        if(odd_res)
            result++;
        return result;
    }
};