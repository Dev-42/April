class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int charStore[256]={0}; 
        int l=0;    
        int r=0;    
        int ans=0;  
        
        while(r<s.length())
        {
            charStore[s[r]]++; 
            
            while(charStore[s[r]]>1)
            { 
                charStore[s[l]]--;
                l++;         
            }
            
            ans = max(ans,r-l+1); 
            r++;
        }
        return ans;
    }
};