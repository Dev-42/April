class Solution {
public:
    bool backspaceCompare(string s, string t)
    {
        return build(s) == build(t);
    }
    
    string build(string res)
    {
        stack<int> st;
        string rev="";
        for(int num: res)
        {
            if(num!='#')
                st.push(num);
            else if(!st.empty())
            {
                st.pop();
            }
        }
        while(!st.empty())
        {
            rev.push_back(st.top());
            st.pop();
        }
        return rev;
    }
};