class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if(s.length() != t.length())
            return false;
        int count[26] = {0};
        int n = s.length();
        
        for(int i=0;i<n;i++)
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(count[i])
                return false;
        }
        return true;
    }
};