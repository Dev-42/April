class Solution {
public:
    bool checkChars(bitset<26>& a,bitset<26>& b)
        {
            for(int i=0;i<26;i++)
            {
                if(a[i] && b[i])
                    return true;
            }
            return false;
        }
    int maxProduct(vector<string>& words) 
    {
        int ans = 0;
        int n = words.size();
        vector<bitset<26>> chars(n);
        for(int i=0;i<n;i++)
        {
            for(auto &ch:words[i])
            {
                chars[i][ch-'a'] = 1;
            }
            for(int j=0;j<i;j++)
            {
                if(!checkChars(chars[i],chars[j]))
                    ans = max(ans,(int)words[i].size()*(int)words[j].size());
            }
        }
        return ans;
    }
};