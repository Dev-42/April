class Solution {
    vector<vector<int>> result;
    void try_combinations(vector<int> combinations,int k, int n, int start)
    {
        if(combinations.size() == k)
        {
            if(n==0)
                result.push_back(combinations);
            return;
        }
        for(int i = start;i <= 9;i++)
        {
            combinations.push_back(i);
            try_combinations(combinations,k,n-i,i+1);
            combinations.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<int> combinations;
        try_combinations(combinations,k,n,1);
        return result;
    }
};