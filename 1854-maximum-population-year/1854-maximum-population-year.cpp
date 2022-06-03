class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) 
    {
        int ans[101] = {0};
        for(int i=0;i<logs.size();i++)
        {
            for(int j=logs[i][0];j<logs[i][1];j++)
            {
                ans[j-1950]++;
            }
        }
        int maxVal = 0;
        int maxYear = 1950;
        for(int i=0;i<101;i++)
        {
            if(maxVal < ans[i])
            {
                maxVal = ans[i];
                maxYear = 1950 + i;
            }
        }
        return maxYear;
    }
};