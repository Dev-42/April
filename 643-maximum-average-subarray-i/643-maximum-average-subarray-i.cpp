class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int n = nums.size();
        double sum = 0;
        //calculating the frist window
        int i = 0;
        for(;i < k;i++)
        {
            sum += nums[i];
        }
        double res = sum;
        //slide the window through nums vector
        int j = 0;
        while(i < n)
        {
            sum -= nums[j++];
            sum += nums[i++];
            res = max(res,sum);
        }
        return res/k;
    }
};