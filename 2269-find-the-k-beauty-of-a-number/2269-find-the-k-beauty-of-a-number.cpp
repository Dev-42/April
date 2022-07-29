class Solution {
public:
    int divisorSubstrings(int num, int k) 
    {
        string str = to_string(num);
        int i = 0 , j = 0 , n  = str.length();
        int res = 0;
        while(j < n)
        {
            //Till window size is reached
            if(j - i + 1 < k)
            {
                ++j;
            }
            //After the window size is equal to k then
            else if(j - i + 1 == k)
            {
                string s = str.substr(i,k);
                int n1 = stoi(s);
                if(n1 != 0 && num % n1 == 0)
                    ++res;
                ++i;
                ++j;
            }
        }
        return res;
    }
};